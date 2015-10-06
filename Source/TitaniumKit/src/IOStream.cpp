/**
 * TitaniumKit Titanium.IOStream
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Titanium/IOStream.hpp"
#include "Titanium/Buffer.hpp"

namespace Titanium
{

	IOStream::IOStream(const JSContext& js_context) TITANIUM_NOEXCEPT
		: Module(js_context)
	{
	}

	std::uint32_t IOStream::getAvailableBytesToRead(const std::shared_ptr<Buffer>& read_buffer, const std::shared_ptr<Buffer>& write_buffer, const std::uint32_t& read_offset, const std::uint32_t& write_offset, const std::uint32_t& length)
	{
		const auto read_limit  = read_buffer->get_length();
		const auto write_limit = write_buffer->get_length();
		if (read_offset >= read_limit || write_offset >= write_limit) {
			return 0;
		}
		auto bytesToRead = write_offset + length > write_limit ? write_limit - write_offset : length;
		if (read_offset + bytesToRead > read_limit) {
			bytesToRead = read_limit - read_offset;
		}

		return bytesToRead;
	}

	std::int32_t IOStream::read(const std::shared_ptr<Buffer>& buffer, const std::uint32_t& offset, const std::uint32_t& length)
	{
		TITANIUM_LOG_WARN("IOStream::read: Unimplemented");
		return -1;
	}

	void IOStream::readAsync(const std::shared_ptr<Buffer>& buffer, const std::uint32_t& offset, const std::uint32_t& length, const std::function<void(const ErrorResponse&, const std::int32_t&)>& callback)
	{
		ErrorResponse error;
		callback(error, read(buffer, offset, length));
	}

	void IOStream::readAllAsync(const std::shared_ptr<Buffer>& buffer, const std::function<void(const ErrorResponse&, const std::shared_ptr<IOStream>& source)>& callback)
	{
		ErrorResponse error;
		error.code = -1;
		error.success = false;
		error.error = "IOStream::readAllAsync: Unimplemented";
		callback(error, get_object().GetPrivate<IOStream>());
	}

	std::uint32_t IOStream::write(const std::shared_ptr<Buffer>& buffer, const std::uint32_t& offset, const std::uint32_t& length)
	{
		TITANIUM_LOG_WARN("IOStream::write: Unimplemented");
		return 0;
	}

	void IOStream::writeAsync(const std::shared_ptr<Buffer>& buffer, const std::uint32_t& offset, const std::uint32_t& length, const std::function<void(const ErrorResponse&, const std::int32_t&)>& callback)
	{
		ErrorResponse error;
		callback(error, write(buffer, offset, length));
	}

	bool IOStream::isWritable() TITANIUM_NOEXCEPT
	{
		return (modes__.find(Filesystem::MODE::WRITE) != modes__.end() || modes__.find(Filesystem::MODE::APPEND) != modes__.end());
	}

	bool IOStream::isReadable() TITANIUM_NOEXCEPT
	{
		return modes__.find(Filesystem::MODE::READ) != modes__.end();
	}

	void IOStream::close()
	{
		TITANIUM_LOG_WARN("IOStream::close: Unimplemented");
	}

	void IOStream::JSExportInitialize() 
	{
		JSExport<IOStream>::SetClassVersion(1);
		JSExport<IOStream>::SetParent(JSExport<Module>::Class());

		TITANIUM_ADD_FUNCTION(IOStream, read);
		TITANIUM_ADD_FUNCTION(IOStream, write);
		TITANIUM_ADD_FUNCTION(IOStream, isWritable);
		TITANIUM_ADD_FUNCTION(IOStream, isReadable);
		TITANIUM_ADD_FUNCTION(IOStream, close);
	}

	TITANIUM_FUNCTION(IOStream, read)
	{
		ENSURE_OBJECT_AT_INDEX(buffer_object, 0);
		ENSURE_OPTIONAL_UINT_AT_INDEX(offset, 1, 0);
		const auto buffer = buffer_object.GetPrivate<Buffer>();
		if (buffer == nullptr) {
			HAL::detail::ThrowRuntimeError("Titanium::IOStream::read", "Titanium::IOStream::read: Invalid arguments");
		}
		ENSURE_OPTIONAL_UINT_AT_INDEX(length, 2, buffer->get_length());
		return get_context().CreateNumber(read(buffer, offset, length));
	}

	TITANIUM_FUNCTION(IOStream, write)
	{
		ENSURE_OBJECT_AT_INDEX(buffer_object, 0);
		ENSURE_OPTIONAL_UINT_AT_INDEX(offset, 1, 0);
		const auto buffer = buffer_object.GetPrivate<Buffer>();
		if (buffer == nullptr) {
			HAL::detail::ThrowRuntimeError("Titanium::IOStream::read", "Titanium::IOStream::read: Invalid arguments");
		}
		ENSURE_OPTIONAL_UINT_AT_INDEX(length, 2, buffer->get_length());
		return get_context().CreateNumber(write(buffer, offset, length));
	}

	TITANIUM_FUNCTION(IOStream, isWritable)
	{
		return get_context().CreateBoolean(isWritable());
	}

	TITANIUM_FUNCTION(IOStream, isReadable)
	{
		return get_context().CreateBoolean(isReadable());
	}

	TITANIUM_FUNCTION(IOStream, close)
	{
		close();
		return get_context().CreateUndefined();
	}
} // namespace Titanium
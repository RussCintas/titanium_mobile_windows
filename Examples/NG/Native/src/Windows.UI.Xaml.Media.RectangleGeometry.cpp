/**
 * Windows Native Wrapper for Windows.UI.Xaml.Media.RectangleGeometry
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Windows.UI.Xaml.DependencyProperty.hpp"
#include "Windows.UI.Xaml.Media.Geometry.hpp"
#include "Windows.UI.Xaml.Media.RectangleGeometry.hpp"

namespace Titanium
{
	namespace Windows
	{
		namespace UI
		{
			namespace Xaml
			{
				namespace Media
				{

		RectangleGeometry::RectangleGeometry(const JSContext& js_context) TITANIUM_NOEXCEPT
			: Windows::UI::Xaml::Media::Geometry(js_context)
		{
			TITANIUM_LOG_DEBUG("RectangleGeometry::ctor");
		}

		void RectangleGeometry::postCallAsConstructor(const JSContext& context, const std::vector<JSValue>& arguments)
		{
			TITANIUM_LOG_DEBUG("RectangleGeometry::postCallAsConstructor ", this);
			if (arguments.size() == 0) {

				wrapped__ = ref new ::Windows::UI::Xaml::Media::RectangleGeometry();
			}

		}

		::Windows::UI::Xaml::Media::RectangleGeometry^ RectangleGeometry::unwrapWindows_UI_Xaml_Media_RectangleGeometry() const
		{
			return dynamic_cast<::Windows::UI::Xaml::Media::RectangleGeometry^>(wrapped__);
		}

		::Windows::UI::Xaml::Media::RectangleGeometry^ RectangleGeometry::unwrap() const
		{
			return unwrapWindows_UI_Xaml_Media_RectangleGeometry();
		}

		void RectangleGeometry::wrap(::Windows::UI::Xaml::Media::RectangleGeometry^ object)
		{
			wrapped__ = object;
		}

		void RectangleGeometry::JSExportInitialize()
		{
			JSExport<RectangleGeometry>::SetClassVersion(1);
			JSExport<RectangleGeometry>::SetParent(JSExport<Windows::UI::Xaml::Media::Geometry>::Class());

			TITANIUM_ADD_PROPERTY(RectangleGeometry, Rect);
			TITANIUM_ADD_PROPERTY_READONLY(RectangleGeometry, RectProperty);
		}

		TITANIUM_PROPERTY_SETTER(RectangleGeometry, Rect)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::Foundation::Rect value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_X_ = static_cast<float>(static_cast<double>(object_value_X));


			auto object_value_Y_ = static_cast<float>(static_cast<double>(object_value_Y));


			auto object_value_Width_ = static_cast<float>(static_cast<double>(object_value_Width));


			auto object_value_Height_ = static_cast<float>(static_cast<double>(object_value_Height));


			unwrap()->Rect = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(RectangleGeometry, Rect)
		{
			auto value = unwrap()->Rect;
			auto context = get_context();

			auto result = context.CreateObject();








		}

		TITANIUM_PROPERTY_GETTER(RectangleGeometry, RectProperty)
		{
			auto value = unwrap()->RectProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

				} // namespace Media
			} // namespace Xaml
		} // namespace UI
	} // namespace Windows
} // namespace Titanium
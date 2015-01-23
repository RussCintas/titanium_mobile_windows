/**
* Titanium.UI.View for Windows
*
* Copyright (c) 2014 by Appcelerator, Inc. All Rights Reserved.
* Licensed under the terms of the Apache Public License.
* Please see the LICENSE included with this distribution for details.
*/

#ifndef _TITANIUMWINDOWS_UI_SCROLLVIEW_HPP_
#define _TITANIUMWINDOWS_UI_SCROLLVIEW_HPP_

#include "TitaniumWindows/UI/detail/UIBase.hpp"
#include "ViewBase.hpp"

namespace TitaniumWindows
{
	namespace UI
	{
		using namespace HAL;

		/*!
		  @class

		  @discussion This is the Titanium.UI.ScrollView implementation for
		  Windows.
		*/
		class TITANIUMWINDOWS_UI_EXPORT ScrollView final : public Titanium::UI::ScrollView, public JSExport<ScrollView>, public ViewBase
		{
		public:
			ScrollView(const JSContext& js_context) TITANIUM_NOEXCEPT;
			ScrollView(const ScrollView&, const std::vector<JSValue>& arguments) TITANIUM_NOEXCEPT;

			virtual ~ScrollView() = default;
			ScrollView(const ScrollView&) = default;
			ScrollView& operator=(const ScrollView&) = default;
#ifdef TITANIUM_MOVE_CTOR_AND_ASSIGN_DEFAULT_ENABLE
			ScrollView(ScrollView&&) = default;
			ScrollView& operator=(ScrollView&&) = default;
#endif

			virtual std::string defaultHeight() const override
			{
				return Titanium::UI::Constants::to_string(Titanium::UI::LAYOUT::FILL);
			}

			virtual std::string defaultWidth() const override
			{
				return Titanium::UI::Constants::to_string(Titanium::UI::LAYOUT::FILL);
			}

			virtual void add(const JSObject& view, JSObject& this_object) TITANIUM_NOEXCEPT override;

			virtual void set_backgroundColor(const std::string& backgroundColorName) TITANIUM_NOEXCEPT override;
			virtual void set_bottom(const std::string& bottom) TITANIUM_NOEXCEPT override final;
			virtual void set_height(const std::string& height) TITANIUM_NOEXCEPT override final;
			virtual void set_layout(const std::string& layout) TITANIUM_NOEXCEPT override final;
			virtual void set_left(const std::string& left) TITANIUM_NOEXCEPT override final;
			virtual void set_right(const std::string& right) TITANIUM_NOEXCEPT override final;
			virtual void set_top(const std::string& top) TITANIUM_NOEXCEPT override final;
			virtual void set_width(const std::string& width) TITANIUM_NOEXCEPT override final;

			virtual void scrollTo(double x, double y) TITANIUM_NOEXCEPT override;
			virtual void scrollToBottom() TITANIUM_NOEXCEPT override;

			virtual std::string get_contentWidth() const TITANIUM_NOEXCEPT override;
			virtual std::string get_contentHeight() const TITANIUM_NOEXCEPT override;

			virtual bool set_contentWidth(const double& width) TITANIUM_NOEXCEPT override;
			virtual bool set_contentHeight(const double& height) TITANIUM_NOEXCEPT override;

			virtual bool get_scrollingEnabled() const TITANIUM_NOEXCEPT;
			virtual bool set_scrollingEnabled(bool enabled) TITANIUM_NOEXCEPT;

			virtual bool get_showHorizontalScrollIndicator() const TITANIUM_NOEXCEPT;
			virtual bool set_showHorizontalScrollIndicator(bool enabled) TITANIUM_NOEXCEPT;

			virtual bool get_showVerticalScrollIndicator() const TITANIUM_NOEXCEPT;
			virtual bool set_showVerticalScrollIndicator(bool enabled) TITANIUM_NOEXCEPT;

			static void JSExportInitialize();

		private:
			Windows::UI::Xaml::Controls::ScrollViewer^ scroll_viewer__;
			JSObject contentView__;

			void setupViewer();
		};
	} // namespace UI
} // namespace TitaniumWindows

#endif  // _TITANIUMWINDOWS_UI_SCROLLVIEW_HPP_
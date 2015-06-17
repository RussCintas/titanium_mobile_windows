/**
 * Windows Native Wrapper for Windows.UI.Xaml.FrameworkElement
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Windows.Foundation.Uri.hpp"
#include "Windows.UI.Xaml.Data.BindingBase.hpp"
#include "Windows.UI.Xaml.Data.BindingExpression.hpp"
#include "Windows.UI.Xaml.DependencyObject.hpp"
#include "Windows.UI.Xaml.DependencyProperty.hpp"
#include "Windows.UI.Xaml.FrameworkElement.hpp"
#include "Windows.UI.Xaml.ResourceDictionary.hpp"
#include "Windows.UI.Xaml.Style.hpp"
#include "Windows.UI.Xaml.TriggerCollection.hpp"
#include "Windows.UI.Xaml.UIElement.hpp"

namespace Titanium
{
	namespace Windows
	{
		namespace UI
		{
			namespace Xaml
			{

		FrameworkElement::FrameworkElement(const JSContext& js_context) TITANIUM_NOEXCEPT
			: Windows::UI::Xaml::UIElement(js_context)
		{
			TITANIUM_LOG_DEBUG("FrameworkElement::ctor");
		}

		void FrameworkElement::postCallAsConstructor(const JSContext& context, const std::vector<JSValue>& arguments)
		{
			TITANIUM_LOG_DEBUG("FrameworkElement::postCallAsConstructor ", this);

		}

		::Windows::UI::Xaml::FrameworkElement^ FrameworkElement::unwrapWindows_UI_Xaml_FrameworkElement() const
		{
			return dynamic_cast<::Windows::UI::Xaml::FrameworkElement^>(wrapped__);
		}

		::Windows::UI::Xaml::FrameworkElement^ FrameworkElement::unwrap() const
		{
			return unwrapWindows_UI_Xaml_FrameworkElement();
		}

		void FrameworkElement::wrap(::Windows::UI::Xaml::FrameworkElement^ object)
		{
			wrapped__ = object;
		}

		void FrameworkElement::JSExportInitialize()
		{
			JSExport<FrameworkElement>::SetClassVersion(1);
			JSExport<FrameworkElement>::SetParent(JSExport<Windows::UI::Xaml::UIElement>::Class());

			TITANIUM_ADD_PROPERTY(FrameworkElement, Language);
			TITANIUM_ADD_PROPERTY(FrameworkElement, HorizontalAlignment);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Height);
			TITANIUM_ADD_PROPERTY(FrameworkElement, MaxWidth);
			TITANIUM_ADD_PROPERTY(FrameworkElement, FlowDirection);
			TITANIUM_ADD_PROPERTY(FrameworkElement, DataContext);
			TITANIUM_ADD_PROPERTY(FrameworkElement, MaxHeight);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Name);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Width);
			TITANIUM_ADD_PROPERTY(FrameworkElement, VerticalAlignment);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Tag);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Style);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Resources);
			TITANIUM_ADD_PROPERTY(FrameworkElement, Margin);
			TITANIUM_ADD_PROPERTY(FrameworkElement, MinWidth);
			TITANIUM_ADD_PROPERTY(FrameworkElement, MinHeight);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, ActualHeight);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, ActualWidth);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, BaseUri);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, Parent);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, Triggers);
			TITANIUM_ADD_PROPERTY(FrameworkElement, RequestedTheme);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, RequestedThemeProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, ActualHeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, ActualWidthProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, DataContextProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, FlowDirectionProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, HeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, HorizontalAlignmentProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, LanguageProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, MarginProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, MaxHeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, MaxWidthProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, MinHeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, MinWidthProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, NameProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, StyleProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, TagProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, VerticalAlignmentProperty);
			TITANIUM_ADD_PROPERTY_READONLY(FrameworkElement, WidthProperty);
			TITANIUM_ADD_FUNCTION(FrameworkElement, FindName);
			TITANIUM_ADD_FUNCTION(FrameworkElement, SetBinding);
			TITANIUM_ADD_FUNCTION(FrameworkElement, GetBindingExpression);
		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Language)
		{ 
			auto value = TitaniumWindows::Utility::ConvertUTF8String(static_cast<std::string>(argument));

			unwrap()->Language = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Language)
		{
			auto value = unwrap()->Language;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, HorizontalAlignment)
		{
			auto value = static_cast<::Windows::UI::Xaml::HorizontalAlignment>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->HorizontalAlignment = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, HorizontalAlignment)
		{
			auto value = unwrap()->HorizontalAlignment;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Height)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->Height = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Height)
		{
			auto value = unwrap()->Height;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, MaxWidth)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->MaxWidth = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MaxWidth)
		{
			auto value = unwrap()->MaxWidth;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, FlowDirection)
		{
			auto value = static_cast<::Windows::UI::Xaml::FlowDirection>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->FlowDirection = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, FlowDirection)
		{
			auto value = unwrap()->FlowDirection;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, DataContext)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapPlatform_Object();

			unwrap()->DataContext = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, DataContext)
		{
			auto value = unwrap()->DataContext;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Platform::Object>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, MaxHeight)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->MaxHeight = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MaxHeight)
		{
			auto value = unwrap()->MaxHeight;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Name)
		{ 
			auto value = TitaniumWindows::Utility::ConvertUTF8String(static_cast<std::string>(argument));

			unwrap()->Name = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Name)
		{
			auto value = unwrap()->Name;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Width)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->Width = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Width)
		{
			auto value = unwrap()->Width;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, VerticalAlignment)
		{
			auto value = static_cast<::Windows::UI::Xaml::VerticalAlignment>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->VerticalAlignment = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, VerticalAlignment)
		{
			auto value = unwrap()->VerticalAlignment;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Tag)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapPlatform_Object();

			unwrap()->Tag = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Tag)
		{
			auto value = unwrap()->Tag;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Platform::Object>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Style)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Style();

			unwrap()->Style = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Style)
		{
			auto value = unwrap()->Style;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Style>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Resources)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_ResourceDictionary();

			unwrap()->Resources = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Resources)
		{
			auto value = unwrap()->Resources;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::ResourceDictionary>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, Margin)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::UI::Xaml::Thickness value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_Left_ = static_cast<float>(static_cast<double>(object_value_Left));


			auto object_value_Top_ = static_cast<float>(static_cast<double>(object_value_Top));


			auto object_value_Right_ = static_cast<float>(static_cast<double>(object_value_Right));


			auto object_value_Bottom_ = static_cast<float>(static_cast<double>(object_value_Bottom));


			unwrap()->Margin = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Margin)
		{
			auto value = unwrap()->Margin;
			auto context = get_context();

			auto result = context.CreateObject();








		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, MinWidth)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->MinWidth = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MinWidth)
		{
			auto value = unwrap()->MinWidth;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, MinHeight)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->MinHeight = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MinHeight)
		{
			auto value = unwrap()->MinHeight;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, ActualHeight)
		{
			auto value = unwrap()->ActualHeight;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, ActualWidth)
		{
			auto value = unwrap()->ActualWidth;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, BaseUri)
		{
			auto value = unwrap()->BaseUri;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::Foundation::Uri>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Parent)
		{
			auto value = unwrap()->Parent;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyObject>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, Triggers)
		{
			auto value = unwrap()->Triggers;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::TriggerCollection>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(FrameworkElement, RequestedTheme)
		{
			auto value = static_cast<::Windows::UI::Xaml::ElementTheme>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->RequestedTheme = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, RequestedTheme)
		{
			auto value = unwrap()->RequestedTheme;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, RequestedThemeProperty)
		{
			auto value = unwrap()->RequestedThemeProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, ActualHeightProperty)
		{
			auto value = unwrap()->ActualHeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, ActualWidthProperty)
		{
			auto value = unwrap()->ActualWidthProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, DataContextProperty)
		{
			auto value = unwrap()->DataContextProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, FlowDirectionProperty)
		{
			auto value = unwrap()->FlowDirectionProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, HeightProperty)
		{
			auto value = unwrap()->HeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, HorizontalAlignmentProperty)
		{
			auto value = unwrap()->HorizontalAlignmentProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, LanguageProperty)
		{
			auto value = unwrap()->LanguageProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MarginProperty)
		{
			auto value = unwrap()->MarginProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MaxHeightProperty)
		{
			auto value = unwrap()->MaxHeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MaxWidthProperty)
		{
			auto value = unwrap()->MaxWidthProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MinHeightProperty)
		{
			auto value = unwrap()->MinHeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, MinWidthProperty)
		{
			auto value = unwrap()->MinWidthProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, NameProperty)
		{
			auto value = unwrap()->NameProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, StyleProperty)
		{
			auto value = unwrap()->StyleProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, TagProperty)
		{
			auto value = unwrap()->TagProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, VerticalAlignmentProperty)
		{
			auto value = unwrap()->VerticalAlignmentProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(FrameworkElement, WidthProperty)
		{
			auto value = unwrap()->WidthProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_FUNCTION(FrameworkElement, FindName)
		{
			auto context = get_context();
			if (arguments.size() == 1) {
				auto _0 = arguments.at(0); 
			auto name = TitaniumWindows::Utility::ConvertUTF8String(static_cast<std::string>(_0));

				auto method_result = unwrap()->FindName(name);
			auto result_wrapper = result.GetPrivate<Platform::Object>();
			result_wrapper->wrap(method_result);

			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched FrameworkElement::FindName with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

		TITANIUM_FUNCTION(FrameworkElement, SetBinding)
		{
			auto context = get_context();
			if (arguments.size() == 2) {
				auto _0 = arguments.at(0);
			auto object_dp = static_cast<JSObject>(_0);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto dp = wrapper_dp->unwrapWindows_UI_Xaml_DependencyProperty();

				auto _1 = arguments.at(1);
			auto object_binding = static_cast<JSObject>(_1);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto binding = wrapper_binding->unwrapWindows_UI_Xaml_Data_BindingBase();

				unwrap()->SetBinding(dp, binding);
				return context.CreateUndefined(); 
			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched FrameworkElement::SetBinding with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

		TITANIUM_FUNCTION(FrameworkElement, GetBindingExpression)
		{
			auto context = get_context();
			if (arguments.size() == 1) {
				auto _0 = arguments.at(0);
			auto object_dp = static_cast<JSObject>(_0);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto dp = wrapper_dp->unwrapWindows_UI_Xaml_DependencyProperty();

				auto method_result = unwrap()->GetBindingExpression(dp);
			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Data::BindingExpression>();
			result_wrapper->wrap(method_result);

			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched FrameworkElement::GetBindingExpression with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

			} // namespace Xaml
		} // namespace UI
	} // namespace Windows
} // namespace Titanium
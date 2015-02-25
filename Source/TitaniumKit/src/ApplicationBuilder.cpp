/**
 * TitaniumKit
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Titanium/ApplicationBuilder.hpp"
#include "Titanium/TiModule.hpp"
#include "Titanium/API.hpp"
#include "Titanium/UIModule.hpp"
#include "Titanium/UI/Animation.hpp"
#include "Titanium/App/Properties.hpp"
#include "Titanium/App.hpp"
#include "Titanium/Analytics.hpp"
#include "Titanium/PlatformModule.hpp"
#include "Titanium/Accelerometer.hpp"
#include "Titanium/Gesture.hpp"
#include "Titanium/Blob.hpp"
#include "Titanium/FilesystemModule.hpp"
#include "Titanium/Filesystem/File.hpp"
#include "Titanium/DatabaseModule.hpp"
#include "Titanium/NetworkModule.hpp"
#include "Titanium/Network/HTTPClient.hpp"
#include "Titanium/XML.hpp"
#include "Titanium/MapModule.hpp"

namespace Titanium
{
	ApplicationBuilder::ApplicationBuilder(const JSContext& js_context) TITANIUM_NOEXCEPT
	    : js_context__(js_context),
	      global_object__(js_context__.get_global_object()),
	      ti__(js_context__.CreateObject<Titanium::TiModule>()),
	      api__(js_context__.CreateObject<Titanium::API>()),
	      view__(js_context__.CreateObject<Titanium::UI::View>()),
	      animation__(js_context__.CreateObject<Titanium::UI::Animation>()),
	      listsection__(js_context__.CreateObject<Titanium::UI::ListSection>()),
	      listview__(js_context__.CreateObject<Titanium::UI::ListView>()),
	      emaildialog__(js_context__.CreateObject<Titanium::UI::EmailDialog>()),
	      properties__(js_context__.CreateObject<Titanium::App::Properties>()),
	      analytics__(js_context__.CreateObject<Titanium::Analytics>()),
	      window__(js_context__.CreateObject<Titanium::UI::Window>()),
	      button__(js_context__.CreateObject<Titanium::UI::Button>()),
	      alertDialog__(js_context__.CreateObject<Titanium::UI::AlertDialog>()),
	      imageview__(js_context__.CreateObject<Titanium::UI::ImageView>()),
	      label__(js_context__.CreateObject<Titanium::UI::Label>()),
	      slider__(js_context__.CreateObject<Titanium::UI::Slider>()),
	      scrollview__(js_context__.CreateObject<Titanium::UI::ScrollView>()),
	      textField__(js_context__.CreateObject<Titanium::UI::TextField>()),
	      webview__(js_context__.CreateObject<Titanium::UI::WebView>()),
	      platform__(js_context__.CreateObject<Titanium::PlatformModule>()),
	      xml__(js_context__.CreateObject<Titanium::XML>()),
	      accelerometer__(js_context__.CreateObject<Titanium::Accelerometer>()),
	      gesture__(js_context__.CreateObject<Titanium::Gesture>()),
	      blob__(js_context__.CreateObject<Titanium::Blob>()),
	      file__(js_context__.CreateObject<Titanium::Filesystem::File>()),
	      filesystem__(js_context__.CreateObject<Titanium::FilesystemModule>()),
	      database__(js_context__.CreateObject<Titanium::DatabaseModule>()),
		  app__(js_context__.CreateObject<Titanium::AppModule>()),
	      httpclient__(js_context__.CreateObject<Titanium::Network::HTTPClient>()),
	      network__(js_context__.CreateObject<Titanium::NetworkModule>()),
	      map__(js_context__.CreateObject<Titanium::MapModule>())
	{
	}

	Application ApplicationBuilder::build()
	{
		JSObject ui = js_context__.CreateObject<Titanium::UIModule>();
		ui.SetProperty("AlertDialog", alertDialog__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("Animation", animation__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("Button", button__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("EmailDialog", emaildialog__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("ImageView", imageview__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("Label", label__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("Slider", slider__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("ScrollView", scrollview__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("TextField", textField__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("View", view__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("Window", window__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("ListView", listview__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("ListSection", listsection__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		ui.SetProperty("WebView", webview__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});

		filesystem__.SetProperty("File", file__);
		network__.SetProperty("HTTPClient", httpclient__);

		JSObject titanium = ti__;
		global_object__.SetProperty("Titanium", titanium, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		global_object__.SetProperty("Ti", titanium, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});

		titanium.SetProperty("API", api__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("UI", ui, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Platform", platform__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Accelerometer", accelerometer__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Gesture", gesture__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Blob", blob__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Filesystem", filesystem__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Database", database__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("App", app__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		app__.SetProperty("Properties", properties__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Network", network__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Analytics", analytics__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("XML", xml__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});
		titanium.SetProperty("Map", map__, {JSPropertyAttribute::ReadOnly, JSPropertyAttribute::DontDelete});

		JSString builtin_functions_script = R"js(
			  console = {};
			  console.log   = Ti.API.info;
			  console.info  = Ti.API.info;
			  console.warn  = Ti.API.warn;
			  console.error = Ti.API.error;

			  // Create the global alert function
			  alert = function (_msg) {
				  Ti.UI.createAlertDialog({
					  title: 'Alert',
					  message: _msg
				  }).show();
			  };
      
			  // Load _app_info_.json
			  Ti.App._loadAppInfo();
			)js";

		js_context__.JSEvaluateScript(builtin_functions_script);

		return Application(*this);
	}

	JSObject ApplicationBuilder::TiObject() const TITANIUM_NOEXCEPT
	{
		return ti__;
	}

	ApplicationBuilder& ApplicationBuilder::TiObject(const JSObject& ti) TITANIUM_NOEXCEPT
	{
		ti__ = ti;
		return *this;
	}

	JSObject ApplicationBuilder::APIObject() const TITANIUM_NOEXCEPT
	{
		return api__;
	}

	ApplicationBuilder& ApplicationBuilder::APIObject(const JSObject& api) TITANIUM_NOEXCEPT
	{
		api__ = api;
		return *this;
	}

	JSObject ApplicationBuilder::ListViewObject() const TITANIUM_NOEXCEPT
	{
		return listview__;
	}

	ApplicationBuilder& ApplicationBuilder::ListViewObject(const JSObject& ListView) TITANIUM_NOEXCEPT
	{
		listview__ = ListView;
		return *this;
	}

	JSObject ApplicationBuilder::ListSectionObject() const TITANIUM_NOEXCEPT
	{
		return listsection__;
	}

	ApplicationBuilder& ApplicationBuilder::ListSectionObject(const JSObject& ListSection) TITANIUM_NOEXCEPT
	{
		listsection__ = ListSection;
		return *this;
	}

	JSObject ApplicationBuilder::AppObject() const TITANIUM_NOEXCEPT
	{
		return app__;
	}

	ApplicationBuilder& ApplicationBuilder::AppObject(const JSObject& App) TITANIUM_NOEXCEPT
	{
		app__ = App;
		return *this;
	}

	JSObject ApplicationBuilder::PropertiesObject() const TITANIUM_NOEXCEPT
	{
		return properties__;
	}

	ApplicationBuilder& ApplicationBuilder::PropertiesObject(const JSObject& Properties) TITANIUM_NOEXCEPT
	{
		properties__ = Properties;
		return *this;
	}

	JSObject ApplicationBuilder::AnalyticsObject() const TITANIUM_NOEXCEPT
	{
		return analytics__;
	}

	ApplicationBuilder& ApplicationBuilder::AnalyticsObject(const JSObject& analytics) TITANIUM_NOEXCEPT
	{
		analytics__ = analytics;
		return *this;
	}

	JSObject ApplicationBuilder::EmailDialogObject() const TITANIUM_NOEXCEPT
	{
		return emaildialog__;
	}

	ApplicationBuilder& ApplicationBuilder::EmailDialogObject(const JSObject& EmailDialog) TITANIUM_NOEXCEPT
	{
		emaildialog__ = EmailDialog;
		return *this;
	}

	JSObject ApplicationBuilder::AnimationObject() const TITANIUM_NOEXCEPT
	{
		return animation__;
	}

	ApplicationBuilder& ApplicationBuilder::AnimationObject(const JSObject& Animation) TITANIUM_NOEXCEPT
	{
		animation__ = Animation;
		return *this;
	}

	JSObject ApplicationBuilder::ViewObject() const TITANIUM_NOEXCEPT
	{
		return view__;
	}

	ApplicationBuilder& ApplicationBuilder::ViewObject(const JSObject& view) TITANIUM_NOEXCEPT
	{
		view__ = view;
		return *this;
	}

	JSObject ApplicationBuilder::WindowObject() const TITANIUM_NOEXCEPT
	{
		return window__;
	}

	ApplicationBuilder& ApplicationBuilder::WindowObject(const JSObject& window) TITANIUM_NOEXCEPT
	{
		window__ = window;
		return *this;
	}

	JSObject ApplicationBuilder::ButtonObject() const TITANIUM_NOEXCEPT
	{
		return button__;
	}

	ApplicationBuilder& ApplicationBuilder::ButtonObject(const JSObject& button) TITANIUM_NOEXCEPT
	{
		button__ = button;
		return *this;
	}

	JSObject ApplicationBuilder::SliderObject() const TITANIUM_NOEXCEPT
	{
		return slider__;
	}

	ApplicationBuilder& ApplicationBuilder::SliderObject(const JSObject& slider) TITANIUM_NOEXCEPT
	{
		slider__ = slider;
		return *this;
	}

	JSObject ApplicationBuilder::AlertDialogObject() const TITANIUM_NOEXCEPT
	{
		return alertDialog__;
	}

	ApplicationBuilder& ApplicationBuilder::AlertDialogObject(const JSObject& alertDialog) TITANIUM_NOEXCEPT
	{
		alertDialog__ = alertDialog;
		return *this;
	}

	JSObject ApplicationBuilder::ImageViewObject() const TITANIUM_NOEXCEPT
	{
		return imageview__;
	}

	ApplicationBuilder& ApplicationBuilder::ImageViewObject(const JSObject& imageview) TITANIUM_NOEXCEPT
	{
		imageview__ = imageview;
		return *this;
	}

	JSObject ApplicationBuilder::LabelObject() const TITANIUM_NOEXCEPT
	{
		return label__;
	}

	ApplicationBuilder& ApplicationBuilder::LabelObject(const JSObject& label) TITANIUM_NOEXCEPT
	{
		label__ = label;
		return *this;
	}

	JSObject ApplicationBuilder::ScrollViewObject() const TITANIUM_NOEXCEPT
	{
		return scrollview__;
	}

	ApplicationBuilder& ApplicationBuilder::ScrollViewObject(const JSObject& view) TITANIUM_NOEXCEPT
	{
		scrollview__ = view;
		return *this;
	}

	JSObject ApplicationBuilder::TextFieldObject() const TITANIUM_NOEXCEPT
	{
		return textField__;
	}

	ApplicationBuilder& ApplicationBuilder::TextFieldObject(const JSObject& view) TITANIUM_NOEXCEPT
	{
		textField__ = view;
		return *this;
	}

	JSObject ApplicationBuilder::PlatformObject() const TITANIUM_NOEXCEPT
	{
		return platform__;
	}

	ApplicationBuilder& ApplicationBuilder::PlatformObject(const JSObject& platform) TITANIUM_NOEXCEPT
	{
		platform__ = platform;
		return *this;
	}

	JSObject ApplicationBuilder::AccelerometerObject() const TITANIUM_NOEXCEPT
	{
		return accelerometer__;
	}

	ApplicationBuilder& ApplicationBuilder::AccelerometerObject(const JSObject& accelerometer) TITANIUM_NOEXCEPT
	{
		accelerometer__ = accelerometer;
		return *this;
	}

	JSObject ApplicationBuilder::GestureObject() const TITANIUM_NOEXCEPT
	{
		return gesture__;
	}

	ApplicationBuilder& ApplicationBuilder::GestureObject(const JSObject& gesture) TITANIUM_NOEXCEPT
	{
		gesture__ = gesture;
		return *this;
	}

	JSObject ApplicationBuilder::BlobObject() const TITANIUM_NOEXCEPT
	{
		return blob__;
	}

	ApplicationBuilder& ApplicationBuilder::BlobObject(const JSObject& blob) TITANIUM_NOEXCEPT
	{
		blob__ = blob;
		return *this;
	}

	JSObject ApplicationBuilder::FileObject() const TITANIUM_NOEXCEPT
	{
		return file__;
	}

	ApplicationBuilder& ApplicationBuilder::FileObject(const JSObject& file) TITANIUM_NOEXCEPT
	{
		file__ = file;
		return *this;
	}

	JSObject ApplicationBuilder::FilesystemObject() const TITANIUM_NOEXCEPT
	{
		return filesystem__;
	}
	ApplicationBuilder& ApplicationBuilder::FilesystemObject(const JSObject& filesystem) TITANIUM_NOEXCEPT
	{
		filesystem__ = filesystem;
		return *this;
	}

	JSObject ApplicationBuilder::DatabaseObject() const TITANIUM_NOEXCEPT
	{
		return database__;
	}
	ApplicationBuilder& ApplicationBuilder::DatabaseObject(const JSObject& database) TITANIUM_NOEXCEPT
	{
		database__ = database;
		return *this;
	}

	JSObject ApplicationBuilder::WebViewObject() const TITANIUM_NOEXCEPT
	{
		return webview__;
	}
	ApplicationBuilder& ApplicationBuilder::WebViewObject(const JSObject& webview) TITANIUM_NOEXCEPT
	{
		webview__ = webview;
		return *this;
	}

	JSObject ApplicationBuilder::HTTPClientObject() const TITANIUM_NOEXCEPT
	{
		return httpclient__;
	}

	ApplicationBuilder& ApplicationBuilder::HTTPClientObject(const JSObject& httpclient) TITANIUM_NOEXCEPT
	{
		httpclient__ = httpclient;
		return *this;
	}

	JSObject ApplicationBuilder::NetworkObject() const TITANIUM_NOEXCEPT
	{
		return network__;
	}
	ApplicationBuilder& ApplicationBuilder::NetworkObject(const JSObject& network) TITANIUM_NOEXCEPT
	{
		network__ = network;
		return *this;
	}

	JSObject ApplicationBuilder::XMLObject() const TITANIUM_NOEXCEPT
	{
		return xml__;
	}

	ApplicationBuilder& ApplicationBuilder::XMLObject(const JSObject& XML) TITANIUM_NOEXCEPT
	{
		xml__ = XML;
		return *this;
	}

	JSObject ApplicationBuilder::MapObject() const TITANIUM_NOEXCEPT
	{
		return map__;
	}

	ApplicationBuilder& ApplicationBuilder::MapObject(const JSObject& Map) TITANIUM_NOEXCEPT
	{
		map__ = Map;
		return *this;
	}

}  // namespace Titanium

/**
* View Helper for Windows
*
* Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
* Licensed under the terms of the Apache Public License.
* Please see the LICENSE included with this distribution for details.
*/
#include "TitaniumWindows/UI/Windows/ViewHelper.hpp"
#include "TitaniumWindows/UI/View.hpp"
namespace TitaniumWindows
{
	namespace UI
	{
		namespace ViewHelper 
		{
			void SetFont(const JSContext& js_context, Windows::UI::Xaml::Controls::TextBlock^ textBlock, const Titanium::UI::Font& font)
			{
				if (font.fontFamily.length() > 0) {
					const auto fontFamily = TitaniumWindows::UI::View::LookupFont(js_context, font.fontFamily);
					if (fontFamily != nullptr) {
						textBlock->FontFamily = fontFamily;
					}
				}
				if (font.fontSize.length() > 0) {
					textBlock->FontSize = std::stod(font.fontSize);
				}

				if (font.fontStyle == Titanium::UI::FONT_STYLE::ITALIC) {
					textBlock->FontStyle = Windows::UI::Text::FontStyle::Italic;
				} else if (font.fontStyle == Titanium::UI::FONT_STYLE::NORMAL) {
					textBlock->FontStyle = Windows::UI::Text::FontStyle::Normal;
				}
				// TODO Windows supports Oblique: http://msdn.microsoft.com/en-us/library/windows/apps/windows.ui.text.fontstyle.aspx

				if (font.fontWeight == Titanium::UI::FONT_WEIGHT::BOLD) {
					textBlock->FontWeight = Windows::UI::Text::FontWeights::Bold;
				} else if (font.fontWeight == Titanium::UI::FONT_WEIGHT::NORMAL) {
					textBlock->FontWeight = Windows::UI::Text::FontWeights::Normal;
				} else if (font.fontWeight == Titanium::UI::FONT_WEIGHT::SEMIBOLD) {
					textBlock->FontWeight = Windows::UI::Text::FontWeights::SemiBold;
				}
				// TODO Windows supports a large number of other weights: http://msdn.microsoft.com/en-us/library/windows/apps/windows.ui.text.fontweights
			}

		} // namespace ViewHelper
	}  // namespace UI
}  // namespace TitaniumWindows

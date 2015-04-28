/**
* Windows.SystemIcon module
*
* Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
* Licensed under the terms of the Apache Public License.
* Please see the LICENSE included with this distribution for details.
*/
#ifndef _TITANIUMWINDOWS_WINDOWS_SYSTEMICON_HPP_
#define _TITANIUMWINDOWS_WINDOWS_SYSTEMICON_HPP_

#include "Titanium/Module.hpp"
#include "TitaniumWindows/UI/detail/UIBase.hpp"

namespace TitaniumWindows
{
	namespace UI
	{
		namespace WindowsXaml 
		{
			using namespace HAL;

			/*!
			  @class

			  @discussion This is the Titanium.UI.Windows implementation
			*/
			class TITANIUMWINDOWS_UI_EXPORT SystemIcon final : public Titanium::Module, public JSExport<SystemIcon>
			{

			public:
				SystemIcon(const JSContext&) TITANIUM_NOEXCEPT;

				virtual ~SystemIcon()                    = default;
				SystemIcon(const SystemIcon&)            = default;
				SystemIcon& operator=(const SystemIcon&) = default;
	#ifdef TITANIUM_MOVE_CTOR_AND_ASSIGN_DEFAULT_ENABLE
				SystemIcon(SystemIcon&&)                 = default;
				SystemIcon& operator=(SystemIcon&&)      = default;
	#endif

				static void JSExportInitialize();

				virtual void postInitialize(JSObject& js_object) override;

				TITANIUM_PROPERTY_READONLY_DEF(PREVIOUS);
				TITANIUM_PROPERTY_READONLY_DEF(NEXT);
				TITANIUM_PROPERTY_READONLY_DEF(PLAY);
				TITANIUM_PROPERTY_READONLY_DEF(PAUSE);
				TITANIUM_PROPERTY_READONLY_DEF(EDIT);
				TITANIUM_PROPERTY_READONLY_DEF(SAVE);
				TITANIUM_PROPERTY_READONLY_DEF(CLEAR);
				TITANIUM_PROPERTY_READONLY_DEF(DELETE);
				TITANIUM_PROPERTY_READONLY_DEF(REMOVE);
				TITANIUM_PROPERTY_READONLY_DEF(ADD);
				TITANIUM_PROPERTY_READONLY_DEF(CANCEL);
				TITANIUM_PROPERTY_READONLY_DEF(ACCEPT);
				TITANIUM_PROPERTY_READONLY_DEF(MORE);
				TITANIUM_PROPERTY_READONLY_DEF(REDO);
				TITANIUM_PROPERTY_READONLY_DEF(UNDO);
				TITANIUM_PROPERTY_READONLY_DEF(HOME);
				TITANIUM_PROPERTY_READONLY_DEF(UP);
				TITANIUM_PROPERTY_READONLY_DEF(FORWARD);
				TITANIUM_PROPERTY_READONLY_DEF(BACK);
				TITANIUM_PROPERTY_READONLY_DEF(FAVORITE);
				TITANIUM_PROPERTY_READONLY_DEF(CAMERA);
				TITANIUM_PROPERTY_READONLY_DEF(SETTING);
				TITANIUM_PROPERTY_READONLY_DEF(VIDEO);
				TITANIUM_PROPERTY_READONLY_DEF(SYNC);
				TITANIUM_PROPERTY_READONLY_DEF(DOWNLOAD);
				TITANIUM_PROPERTY_READONLY_DEF(MAIL);
				TITANIUM_PROPERTY_READONLY_DEF(FIND);
				TITANIUM_PROPERTY_READONLY_DEF(HELP);
				TITANIUM_PROPERTY_READONLY_DEF(UPLOAD);
				TITANIUM_PROPERTY_READONLY_DEF(EMOJI);
				TITANIUM_PROPERTY_READONLY_DEF(TWOPAGE);
				TITANIUM_PROPERTY_READONLY_DEF(LEAVECHAT);
				TITANIUM_PROPERTY_READONLY_DEF(MAILFORWARD);
				TITANIUM_PROPERTY_READONLY_DEF(CLOCK);
				TITANIUM_PROPERTY_READONLY_DEF(SEND);
				TITANIUM_PROPERTY_READONLY_DEF(CROP);
				TITANIUM_PROPERTY_READONLY_DEF(ROTATECAMERA);
				TITANIUM_PROPERTY_READONLY_DEF(PEOPLE);
				TITANIUM_PROPERTY_READONLY_DEF(OPENPANE);
				TITANIUM_PROPERTY_READONLY_DEF(CLOSEPANE);
				TITANIUM_PROPERTY_READONLY_DEF(WORLD);
				TITANIUM_PROPERTY_READONLY_DEF(FLAG);
				TITANIUM_PROPERTY_READONLY_DEF(PREVIEWLINK);
				TITANIUM_PROPERTY_READONLY_DEF(GLOBE);
				TITANIUM_PROPERTY_READONLY_DEF(TRIM);
				TITANIUM_PROPERTY_READONLY_DEF(ATTACHCAMERA);
				TITANIUM_PROPERTY_READONLY_DEF(ZOOMIN);
				TITANIUM_PROPERTY_READONLY_DEF(BOOKMARKS);
				TITANIUM_PROPERTY_READONLY_DEF(DOCUMENT);
				TITANIUM_PROPERTY_READONLY_DEF(PROTECTEDDOCUMENT);
				TITANIUM_PROPERTY_READONLY_DEF(PAGE);
				TITANIUM_PROPERTY_READONLY_DEF(BULLETS);
				TITANIUM_PROPERTY_READONLY_DEF(COMMENT);
				TITANIUM_PROPERTY_READONLY_DEF(MAILFILLED);
				TITANIUM_PROPERTY_READONLY_DEF(CONTACTINFO);
				TITANIUM_PROPERTY_READONLY_DEF(HANGUP);
				TITANIUM_PROPERTY_READONLY_DEF(VIEWALL);
				TITANIUM_PROPERTY_READONLY_DEF(MAPPIN);
				TITANIUM_PROPERTY_READONLY_DEF(PHONE);
				TITANIUM_PROPERTY_READONLY_DEF(VIDEOCHAT);
				TITANIUM_PROPERTY_READONLY_DEF(SWITCH);
				TITANIUM_PROPERTY_READONLY_DEF(CONTACT);
				TITANIUM_PROPERTY_READONLY_DEF(RENAME);
				TITANIUM_PROPERTY_READONLY_DEF(PIN);
				TITANIUM_PROPERTY_READONLY_DEF(MUSICINFO);
				TITANIUM_PROPERTY_READONLY_DEF(GO);
				TITANIUM_PROPERTY_READONLY_DEF(KEYBOARD);
				TITANIUM_PROPERTY_READONLY_DEF(DOCKLEFT);
				TITANIUM_PROPERTY_READONLY_DEF(DOCKRIGHT);
				TITANIUM_PROPERTY_READONLY_DEF(DOCKBOTTOM);
				TITANIUM_PROPERTY_READONLY_DEF(REMOTE);
				TITANIUM_PROPERTY_READONLY_DEF(REFRESH);
				TITANIUM_PROPERTY_READONLY_DEF(ROTATE);
				TITANIUM_PROPERTY_READONLY_DEF(SHUFFLE);
				TITANIUM_PROPERTY_READONLY_DEF(LIST);
				TITANIUM_PROPERTY_READONLY_DEF(SHOP);
				TITANIUM_PROPERTY_READONLY_DEF(SELECTALL);
				TITANIUM_PROPERTY_READONLY_DEF(ORIENTATION);
				TITANIUM_PROPERTY_READONLY_DEF(IMPORT);
				TITANIUM_PROPERTY_READONLY_DEF(IMPORTALL);
				TITANIUM_PROPERTY_READONLY_DEF(BROWSEPHOTOS);
				TITANIUM_PROPERTY_READONLY_DEF(WEBCAM);
				TITANIUM_PROPERTY_READONLY_DEF(PICTURES);
				TITANIUM_PROPERTY_READONLY_DEF(SAVELOCAL);
				TITANIUM_PROPERTY_READONLY_DEF(CAPTION);
				TITANIUM_PROPERTY_READONLY_DEF(STOP);
				TITANIUM_PROPERTY_READONLY_DEF(SHOWRESULTS);
				TITANIUM_PROPERTY_READONLY_DEF(VOLUME);
				TITANIUM_PROPERTY_READONLY_DEF(REPAIR);
				TITANIUM_PROPERTY_READONLY_DEF(MESSAGE);
				TITANIUM_PROPERTY_READONLY_DEF(PAGE2);
				TITANIUM_PROPERTY_READONLY_DEF(CALENDARDAY);
				TITANIUM_PROPERTY_READONLY_DEF(CALENDARWEEK);
				TITANIUM_PROPERTY_READONLY_DEF(CALENDAR);
				TITANIUM_PROPERTY_READONLY_DEF(CHARACTER);
				TITANIUM_PROPERTY_READONLY_DEF(MAILREPLYALL);
				TITANIUM_PROPERTY_READONLY_DEF(READ);
				TITANIUM_PROPERTY_READONLY_DEF(LINK);
				TITANIUM_PROPERTY_READONLY_DEF(ACCOUNT);
				TITANIUM_PROPERTY_READONLY_DEF(SHOWBCC);
				TITANIUM_PROPERTY_READONLY_DEF(HIDEBCC);
				TITANIUM_PROPERTY_READONLY_DEF(CUT);
				TITANIUM_PROPERTY_READONLY_DEF(ATTACH);
				TITANIUM_PROPERTY_READONLY_DEF(PASTE);
				TITANIUM_PROPERTY_READONLY_DEF(FILTER);
				TITANIUM_PROPERTY_READONLY_DEF(COPY);
				TITANIUM_PROPERTY_READONLY_DEF(EMOJI2);
				TITANIUM_PROPERTY_READONLY_DEF(IMPORTANT);
				TITANIUM_PROPERTY_READONLY_DEF(MAILREPLY);
				TITANIUM_PROPERTY_READONLY_DEF(SLIDESHOW);
				TITANIUM_PROPERTY_READONLY_DEF(SORT);
				TITANIUM_PROPERTY_READONLY_DEF(MANAGE);
				TITANIUM_PROPERTY_READONLY_DEF(ALLAPPS);
				TITANIUM_PROPERTY_READONLY_DEF(DISCONNECTDRIVE);
				TITANIUM_PROPERTY_READONLY_DEF(MAPDRIVE);
				TITANIUM_PROPERTY_READONLY_DEF(NEWWINDOW);
				TITANIUM_PROPERTY_READONLY_DEF(OPENWITH);
				TITANIUM_PROPERTY_READONLY_DEF(CONTACTPRESENCE);
				TITANIUM_PROPERTY_READONLY_DEF(PRIORITY);
				TITANIUM_PROPERTY_READONLY_DEF(GOTOTODAY);
				TITANIUM_PROPERTY_READONLY_DEF(FONT);
				TITANIUM_PROPERTY_READONLY_DEF(FONTCOLOR);
				TITANIUM_PROPERTY_READONLY_DEF(CONTACT2);
				TITANIUM_PROPERTY_READONLY_DEF(FOLDER);
				TITANIUM_PROPERTY_READONLY_DEF(AUDIO);
				TITANIUM_PROPERTY_READONLY_DEF(PLACEHOLDER);
				TITANIUM_PROPERTY_READONLY_DEF(VIEW);
				TITANIUM_PROPERTY_READONLY_DEF(SETLOCKSCREEN);
				TITANIUM_PROPERTY_READONLY_DEF(SETTILE);
				TITANIUM_PROPERTY_READONLY_DEF(CLOSEDCAPTION);
				TITANIUM_PROPERTY_READONLY_DEF(STOPSLIDESHOW);
				TITANIUM_PROPERTY_READONLY_DEF(PERMISSIONS);
				TITANIUM_PROPERTY_READONLY_DEF(HIGHLIGHT);
				TITANIUM_PROPERTY_READONLY_DEF(DISABLEUPDATES);
				TITANIUM_PROPERTY_READONLY_DEF(UNFAVORITE);
				TITANIUM_PROPERTY_READONLY_DEF(UNPIN);
				TITANIUM_PROPERTY_READONLY_DEF(OPENLOCAL);
				TITANIUM_PROPERTY_READONLY_DEF(MUTE);
				TITANIUM_PROPERTY_READONLY_DEF(ITALIC);
				TITANIUM_PROPERTY_READONLY_DEF(UNDERLINE);
				TITANIUM_PROPERTY_READONLY_DEF(BOLD);
				TITANIUM_PROPERTY_READONLY_DEF(MOVETOFOLDER);
				TITANIUM_PROPERTY_READONLY_DEF(LIKEDISLIKE);
				TITANIUM_PROPERTY_READONLY_DEF(DISLIKE);
				TITANIUM_PROPERTY_READONLY_DEF(LIKE);
				TITANIUM_PROPERTY_READONLY_DEF(ALIGNRIGHT);
				TITANIUM_PROPERTY_READONLY_DEF(ALIGNCENTER);
				TITANIUM_PROPERTY_READONLY_DEF(ALIGNLEFT);
				TITANIUM_PROPERTY_READONLY_DEF(ZOOM);
				TITANIUM_PROPERTY_READONLY_DEF(ZOOMOUT);
				TITANIUM_PROPERTY_READONLY_DEF(OPENFILE);
				TITANIUM_PROPERTY_READONLY_DEF(OTHERUSER);
				TITANIUM_PROPERTY_READONLY_DEF(ADMIN);
				TITANIUM_PROPERTY_READONLY_DEF(STREET);
				TITANIUM_PROPERTY_READONLY_DEF(MAP);
				TITANIUM_PROPERTY_READONLY_DEF(CLEARSELECTION);
				TITANIUM_PROPERTY_READONLY_DEF(FONTDECREASE);
				TITANIUM_PROPERTY_READONLY_DEF(FONTINCREASE);
				TITANIUM_PROPERTY_READONLY_DEF(FONTSIZE);
				TITANIUM_PROPERTY_READONLY_DEF(CELLPHONE);
				TITANIUM_PROPERTY_READONLY_DEF(RESHARE);
				TITANIUM_PROPERTY_READONLY_DEF(TAG);
				TITANIUM_PROPERTY_READONLY_DEF(REPEATONE);
				TITANIUM_PROPERTY_READONLY_DEF(REPEATALL);
				TITANIUM_PROPERTY_READONLY_DEF(OUTLINESTAR);
				TITANIUM_PROPERTY_READONLY_DEF(SOLIDSTAR);
				TITANIUM_PROPERTY_READONLY_DEF(CALCULATOR);
				TITANIUM_PROPERTY_READONLY_DEF(DIRECTIONS);
				TITANIUM_PROPERTY_READONLY_DEF(TARGET);
				TITANIUM_PROPERTY_READONLY_DEF(LIBRARY);
				TITANIUM_PROPERTY_READONLY_DEF(PHONEBOOK);
				TITANIUM_PROPERTY_READONLY_DEF(MEMO);
				TITANIUM_PROPERTY_READONLY_DEF(MICROPHONE);
				TITANIUM_PROPERTY_READONLY_DEF(POSTUPDATE);
				TITANIUM_PROPERTY_READONLY_DEF(BACKTOWINDOW);
				TITANIUM_PROPERTY_READONLY_DEF(FULLSCREEN);
				TITANIUM_PROPERTY_READONLY_DEF(NEWFOLDER);
				TITANIUM_PROPERTY_READONLY_DEF(CALENDARREPLY);
				TITANIUM_PROPERTY_READONLY_DEF(UNSYNCFOLDER);
				TITANIUM_PROPERTY_READONLY_DEF(REPORTHACKED);
				TITANIUM_PROPERTY_READONLY_DEF(SYNCFOLDER);
				TITANIUM_PROPERTY_READONLY_DEF(BLOCKCONTACT);
				TITANIUM_PROPERTY_READONLY_DEF(SWITCHAPPS);
				TITANIUM_PROPERTY_READONLY_DEF(ADDFRIEND);
				TITANIUM_PROPERTY_READONLY_DEF(TOUCHPOINTER);
				TITANIUM_PROPERTY_READONLY_DEF(GOTOSTART);
				TITANIUM_PROPERTY_READONLY_DEF(ZEROBARS);
				TITANIUM_PROPERTY_READONLY_DEF(ONEBAR);
				TITANIUM_PROPERTY_READONLY_DEF(TWOBARS);
				TITANIUM_PROPERTY_READONLY_DEF(THREEBARS);
				TITANIUM_PROPERTY_READONLY_DEF(FOURBARS);
				TITANIUM_PROPERTY_READONLY_DEF(SCAN);
				TITANIUM_PROPERTY_READONLY_DEF(PREVIEW);

			private:
				JSValue previous__;
				JSValue next__;
				JSValue play__;
				JSValue pause__;
				JSValue edit__;
				JSValue save__;
				JSValue clear__;
				JSValue delete__;
				JSValue remove__;
				JSValue add__;
				JSValue cancel__;
				JSValue accept__;
				JSValue more__;
				JSValue redo__;
				JSValue undo__;
				JSValue home__;
				JSValue up__;
				JSValue forward__;
				JSValue back__;
				JSValue favorite__;
				JSValue camera__;
				JSValue setting__;
				JSValue video__;
				JSValue sync__;
				JSValue download__;
				JSValue mail__;
				JSValue find__;
				JSValue help__;
				JSValue upload__;
				JSValue emoji__;
				JSValue twopage__;
				JSValue leavechat__;
				JSValue mailforward__;
				JSValue clock__;
				JSValue send__;
				JSValue crop__;
				JSValue rotatecamera__;
				JSValue people__;
				JSValue openpane__;
				JSValue closepane__;
				JSValue world__;
				JSValue flag__;
				JSValue previewlink__;
				JSValue globe__;
				JSValue trim__;
				JSValue attachcamera__;
				JSValue zoomin__;
				JSValue bookmarks__;
				JSValue document__;
				JSValue protecteddocument__;
				JSValue page__;
				JSValue bullets__;
				JSValue comment__;
				JSValue mailfilled__;
				JSValue contactinfo__;
				JSValue hangup__;
				JSValue viewall__;
				JSValue mappin__;
				JSValue phone__;
				JSValue videochat__;
				JSValue switch__;
				JSValue contact__;
				JSValue rename__;
				JSValue pin__;
				JSValue musicinfo__;
				JSValue go__;
				JSValue keyboard__;
				JSValue dockleft__;
				JSValue dockright__;
				JSValue dockbottom__;
				JSValue remote__;
				JSValue refresh__;
				JSValue rotate__;
				JSValue shuffle__;
				JSValue list__;
				JSValue shop__;
				JSValue selectall__;
				JSValue orientation__;
				JSValue import__;
				JSValue importall__;
				JSValue browsephotos__;
				JSValue webcam__;
				JSValue pictures__;
				JSValue savelocal__;
				JSValue caption__;
				JSValue stop__;
				JSValue showresults__;
				JSValue volume__;
				JSValue repair__;
				JSValue message__;
				JSValue page2__;
				JSValue calendarday__;
				JSValue calendarweek__;
				JSValue calendar__;
				JSValue character__;
				JSValue mailreplyall__;
				JSValue read__;
				JSValue link__;
				JSValue account__;
				JSValue showbcc__;
				JSValue hidebcc__;
				JSValue cut__;
				JSValue attach__;
				JSValue paste__;
				JSValue filter__;
				JSValue copy__;
				JSValue emoji2__;
				JSValue important__;
				JSValue mailreply__;
				JSValue slideshow__;
				JSValue sort__;
				JSValue manage__;
				JSValue allapps__;
				JSValue disconnectdrive__;
				JSValue mapdrive__;
				JSValue newwindow__;
				JSValue openwith__;
				JSValue contactpresence__;
				JSValue priority__;
				JSValue gototoday__;
				JSValue font__;
				JSValue fontcolor__;
				JSValue contact2__;
				JSValue folder__;
				JSValue audio__;
				JSValue placeholder__;
				JSValue view__;
				JSValue setlockscreen__;
				JSValue settile__;
				JSValue closedcaption__;
				JSValue stopslideshow__;
				JSValue permissions__;
				JSValue highlight__;
				JSValue disableupdates__;
				JSValue unfavorite__;
				JSValue unpin__;
				JSValue openlocal__;
				JSValue mute__;
				JSValue italic__;
				JSValue underline__;
				JSValue bold__;
				JSValue movetofolder__;
				JSValue likedislike__;
				JSValue dislike__;
				JSValue like__;
				JSValue alignright__;
				JSValue aligncenter__;
				JSValue alignleft__;
				JSValue zoom__;
				JSValue zoomout__;
				JSValue openfile__;
				JSValue otheruser__;
				JSValue admin__;
				JSValue street__;
				JSValue map__;
				JSValue clearselection__;
				JSValue fontdecrease__;
				JSValue fontincrease__;
				JSValue fontsize__;
				JSValue cellphone__;
				JSValue reshare__;
				JSValue tag__;
				JSValue repeatone__;
				JSValue repeatall__;
				JSValue outlinestar__;
				JSValue solidstar__;
				JSValue calculator__;
				JSValue directions__;
				JSValue target__;
				JSValue library__;
				JSValue phonebook__;
				JSValue memo__;
				JSValue microphone__;
				JSValue postupdate__;
				JSValue backtowindow__;
				JSValue fullscreen__;
				JSValue newfolder__;
				JSValue calendarreply__;
				JSValue unsyncfolder__;
				JSValue reporthacked__;
				JSValue syncfolder__;
				JSValue blockcontact__;
				JSValue switchapps__;
				JSValue addfriend__;
				JSValue touchpointer__;
				JSValue gotostart__;
				JSValue zerobars__;
				JSValue onebar__;
				JSValue twobars__;
				JSValue threebars__;
				JSValue fourbars__;
				JSValue scan__;
				JSValue preview__;
			};
		} // namespace WindowsXaml
	}  // namespace UI
}  // namespace TitaniumWindows
#endif // _TITANIUMWINDOWS_WINDOWS_SYSTEMICON_HPP_
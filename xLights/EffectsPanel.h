#ifndef EFFECTSPANEL_H
#define EFFECTSPANEL_H

//(*Headers(EffectsPanel)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/colordlg.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/choicebk.h>
//*)

#include <wx/filedlg.h>
#include <wx/fontdlg.h>
#include <unordered_map> //-DJ

class EffectsPanel: public wxPanel
{
	public:

		EffectsPanel(wxWindow *parent, wxWindowID id=wxID_ANY, const wxPoint &pos=wxDefaultPosition, const wxSize &size=wxDefaultSize, long style=wxTAB_TRAVERSAL, const wxString &name=wxPanelNameStr);
		virtual ~EffectsPanel();
        bool PaletteChanged;
        bool EffectChanged;
        void SetDefaultPalette();
        wxString* CurrentDir;
        wxColour GetPaletteColor(int idx);
        void SetPaletteColor(int idx, const wxColour* c);
        wxString GetEffectString();
        wxString GetRandomEffectString(int effidx);
        static const int PALETTE_SIZE = 6;

		//(*Declarations(EffectsPanel)
		wxCheckBox* CheckBox_Circles_Plasma;
		wxPanel* Panel1_Life;
		wxButton* Button_Text_Font2;
		wxBitmapButton* BitmapButton_TextEffect2;
		wxBitmapButton* BitmapButton_FireworksNumberExplosions;
		wxStaticText* StaticText93;
		wxSlider* Slider_Fireworks_Number_Explosions;
		wxBitmapButton* BitmapButton_Palette1;
		wxStaticText* StaticText79;
		wxCheckBox* CheckBox_Curtain_Repeat;
		wxTextCtrl* TextCtrl_Fadein;
		wxBitmapButton* BitmapButton_normal;
		wxBitmapButton* BitmapButton_CirclesCount;
		wxBitmapButton* BitmapButton_FireHeight;
		wxBitmapButton* BitmapButton_Highlight;
		wxBitmapButton* BitmapButton_SnowflakesType;
		wxCheckBox* CheckBox_Spirals_Grow;
		wxSlider* Slider_Speed;
		wxBitmapButton* BitmapButton_SnowstormCount;
		wxStaticText* StaticText100;
		wxBitmapButton* BitmapButton_ButterflyColors;
		wxStaticText* StaticText32;
		wxStaticText* StaticText36;
		wxPanel* Panel2;
		wxStaticText* StaticText40;
		wxBitmapButton* BitmapButton_CurtainRepeat;
		wxBitmapButton* BitmapButton_CurtainEffect;
		wxBitmapButton* BitmapButton_GarlandsType;
		wxCheckBox* CheckBox_Bars_Highlight;
		wxStaticText* StaticText27;
		wxStaticText* StaticText89;
		wxPanel* Panel1_Circles;
		wxBitmapButton* BitmapButton_SpiralsDirection;
		wxSlider* Slider_Butterfly_Style;
		wxPanel* Panel1_Garlands;
		wxChoice* Choice_Meteors_Effect;
		wxBitmapButton* BitmapButton_TextPosition2;
		wxBitmapButton* BitmapButton_TextDir1;
		wxSlider* Slider_Life_Count;
		wxSlider* Slider_Chase_Speed1;
		wxBitmapButton* BitmapButton_CirclesRadial3D;
		wxChoice* Choice_Curtain_Effect;
		wxSlider* Slider_Twinkle_Steps;
		wxPanel* Panel1_SingleStrand;
		wxStaticText* StaticText41;
		wxPanel* Panel1;
		wxBitmapButton* BitmapButton_Palette5;
		wxPanel* Panel1_Spirograph;
		wxBitmapButton* BitmapButton_FadeOut;
		wxBitmapButton* BitmapButton_TwinkleSteps;
		wxBitmapButton* BitmapButton_Palette6;
		wxButton* Button_Palette1;
		wxChoice* Choice_Curtain_Edge;
		wxStaticText* StaticText85;
		wxSlider* Slider_Fireworks_Velocity;
		wxButton* Button_Pictures_Filename;
		wxBitmapButton* BitmapButton_RandomMotion;
		wxStaticText* StaticText128;
		wxStaticText* StaticText46;
		wxBitmapButton* BitmapButton_SnowflakesCount;
		wxCheckBox* CheckBox_Circles_Collide;
		wxBitmapButton* BitmapButton_TextEffect1;
		wxBitmapButton* BitmapButton_CirclesBounce;
		wxSlider* Slider_Butterfly_Skip;
		wxBitmapButton* BitmapButton_PaletteRep;
		wxCheckBox* CheckBox_Circles_Radial_3D;
		wxCheckBox* CheckBox_Group_Arches1;
		wxStaticText* StaticText92;
		wxStaticText* StaticText5;
		wxPanel* Panel_Text1;
		wxStaticText* StaticText87;
		wxBitmapButton* BitmapButton_locked;
		wxBitmapButton* BitmapButton_TextPosition1;
		wxStaticText* StaticText25;
		wxStaticText* StaticText6;
		wxStaticText* StaticText108;
		wxBitmapButton* BitmapButton_Spirographr;
		wxChoice* Choice_Text_Dir2;
		wxBitmapButton* BitmapButton_SpiralsGrow;
		wxPanel* Panel1_ColorWash;
		wxCheckBox* CheckBox_Palette3;
		wxBitmapButton* BitmapButton_FireWidth;
		wxNotebook* Notebook1;
		wxBitmapButton* BitmapButton_SpirographR;
		wxBitmapButton* BitmapButton_FitToTime;
		wxChoice* Choice_Butterfly_Colors;
		wxSlider* Slider_Chase_Speed2;
		wxChoice* Choice_Text_Dir1;
		wxSlider* Slider_Garlands_Type;
		wxBitmapButton* BitmapButton_SpiralsBlend;
		wxBitmapButton* BitmapButton_TextFont2;
		wxStaticText* StaticText39;
		wxBitmapButton* BitmapButton_Spirographd;
		wxCheckBox* CheckBox_FitToTime;
		wxCheckBox* CheckBox_R_TO_L2;
		wxChoicebook* Choicebook1;
		wxStaticText* StaticText10;
		wxStaticText* StaticText35;
		wxSlider* Slider_Color_Mix2;
		wxBitmapButton* BitmapButton_TwinkleCount;
		wxBitmapButton* BitmapButton_TextDir2;
		wxBitmapButton* BitmapButton_MeteorsCount;
		wxBitmapButton* BitmapButton_Direction;
		wxSlider* Slider_Chase_Spacing2;
		wxBitmapButton* BitmapButton_MeteorsEffect;
		wxSlider* Slider_Meteors_Length;
		wxStaticText* StaticText78;
		wxSlider* Slider_Fireworks_Fade;
		wxStaticText* StaticText23;
		wxStaticText* StaticText33;
		wxStaticText* StaticText12;
		wxCheckBox* CheckBox_Palette2;
		wxPanel* Panel1_Pictures;
		wxChoice* Choice_Text_Effect1;
		wxSlider* Slider_Fire_HueShift;
		wxBitmapButton* BitmapButton_TextLine1;
		wxPanel* Panel1_Meteors;
		wxSlider* Slider_Life_Seed;
		wxBitmapButton* BitmapButton_CirclesCollide;
		wxBitmapButton* BitmapButton_ButterflyChunks;
		wxStaticText* StaticText90;
		wxSlider* Slider_Twinkle_Count;
		wxSlider* Slider_Fire_Height;
		wxSlider* Slider_Snowflakes_Type;
		wxPanel* Panel1_Curtain;
		wxButton* Button_Palette3;
		wxCheckBox* CheckBox_R_TO_L1;
		wxBitmapButton* BitmapButton_Palette2;
		wxBitmapButton* BitmapButton_ColorWashVFade;
		wxStaticText* StaticText130;
		wxPanel* Panel1_Piano;
		wxStaticText* StaticText7;
		wxSlider* Slider_Meteors_Count;
		wxTextCtrl* TextCtrl_Text_Line2;
		wxChoice* Choice_Pictures_Direction;
		wxChoice* Choice_Meteors_Type;
		wxSlider* Slider_Spirals_Count;
		wxStaticText* StaticText16;
		wxTextCtrl* TextCtrl_Speed;
		wxSlider* Slider_Bars_BarCount;
		wxBitmapButton* BitmapButton_CurtainEdge;
		wxCheckBox* CheckBox_Spirals_Blend;
		wxButton* Button_Palette6;
		wxStaticText* StaticText107;
		wxSlider* Slider_Spirograph_d;
		wxCheckBox* CheckBox_Palette5;
		wxStaticText* StaticText57;
		wxChoice* Choice_Bars_Direction;
		wxBitmapButton* BitmapButton_MeteorsType;
		wxSlider* Slider_Spirals_Rotation;
		wxStaticText* StaticText98;
		wxButton* Button_Text_Font1;
		wxBitmapButton* BitmapButton_SpirographAnimate;
		wxBitmapButton* BitmapButton_TwinkleStrobe;
		wxStaticText* StaticText43;
		wxStaticText* StaticText24;
		wxBitmapButton* BitmapButton_PicturesDirection;
		wxSlider* Slider_Spirograph_r;
		wxSlider* Slider_Pictures_GifSpeed;
		wxStaticText* StaticText94;
		wxSlider* Slider_Snowflakes_Count;
		wxStaticText* StaticText14;
		wxTextCtrl* TextCtrl_Text_Font1;
		wxStaticText* StaticText88;
		wxSlider* Slider_Tree_Branches;
		wxStaticText* StaticText34;
		wxBitmapButton* BitmapButton_Spirals3D;
		wxSlider* Slider_Chase_Spacing1;
		wxTextCtrl* TextCtrl_Text_Line1;
		wxStaticText* StaticText18;
		wxSlider* Slider_Color_Mix1;
		wxBitmapButton* BitmapButton_random;
		wxStaticText* StaticText86;
		wxBitmapButton* BitmapButton_FireworksVelocity;
		wxButton* Button_Palette4;
		wxBitmapButton* BitmapButton_MeteorsLength;
		wxStaticText* StaticText37;
		wxCheckBox* CheckBox_Palette1;
		wxStaticText* StaticText13;
		wxStaticText* StaticText51;
		wxStaticText* StaticText53;
		wxStaticText* StaticText132;
		wxCheckBox* CheckBox_Circles_Random_m;
		wxCheckBox* CheckBox_Palette6;
		wxStaticText* StaticText54;
		wxPanel* Panel_Text2;
		wxSlider* Slider_Meteors_Swirl_Intensity;
		wxPanel* Panel1_Snowflakes;
		wxCheckBox* CheckBox_Palette4;
		wxFlexGridSizer* FlexGridSizer_Palette;
		wxBitmapButton* BitmapButton_PicturesSpeed;
		wxPanel* Panel1_Tree;
		wxStaticText* StaticText31;
		wxStaticText* StaticText103;
		wxPanel* Panel1_Fire;
		wxChoice* Choice_Text_Effect2;
		wxBitmapButton* BitmapButton_ColorWashCount;
		wxBitmapButton* BitmapButton_TreeBranches;
		wxPanel* Panel1_Twinkle;
		wxStaticText* StaticText96;
		wxSlider* Slider_Curtain_Swag;
		wxSlider* Slider_Spirals_Thickness;
		wxBitmapButton* BitmapButton_PianoKeyboard;
		wxBitmapButton* BitmapButton_CirclesSize;
		wxTextCtrl* TextCtrl_Text_Font2;
		wxBitmapButton* BitmapButton_FadeIn;
		wxBitmapButton* BitmapButton_LifeCount;
		wxCheckBox* CheckBox_Twinkle_Strobe;
		wxStaticText* StaticText104;
		wxBitmapButton* BitmapButton_CirclesPlasma;
		wxStaticText* StaticText137;
		wxCheckBox* CheckBox_ColorWash_HFade;
		wxColourDialog* ColourDialog1;
		wxSlider* Slider_Garlands_Spacing;
		wxCheckBox* CheckBox_ColorWash_VFade;
		wxBitmapButton* BitmapButton_LifeSpeed;
		wxBitmapButton* BitmapButton_3D;
		wxStaticText* StaticText136;
		wxSlider* Slider_Text_Position1;
		wxPanel* Panel1_None;
		wxBitmapButton* BitmapButton_TextCount1;
		wxStaticText* StaticText45;
		wxPanel* Panel1_Fireworks;
		wxChoice* Choice_Text_Count1;
		wxBitmapButton* BitmapButton_SpiralsThickness;
		wxTextCtrl* TextCtrl_Pictures_Filename;
		wxBitmapButton* BitmapButton_ButterflySkip;
		wxSlider* Slider_Spirograph_R;
		wxStaticText* StaticText4;
		wxStaticText* StaticText80;
		wxBitmapButton* BitmapButton_TextCount2;
		wxBitmapButton* BitmapButton_FireGrow;
		wxSlider* Slider_ColorWash_Count;
		wxButton* Button_Palette5;
		wxBitmapButton* BitmapButton_ButterflyStyle;
		wxStaticText* StaticText59;
		wxStaticText* StaticText95;
		wxCheckBox* CheckBox_Circles_Radial;
		wxCheckBox* CheckBox_Fire_GrowFire;
		wxTextCtrl* TextCtrl_Fadeout;
		wxBitmapButton* BitmapButton_LayerEffect;
		wxBitmapButton* BitmapButton_SpiralsShrink;
		wxBitmapButton* BitmapButton_CurtainSwag;
		wxSlider* Slider_Circles_Count;
		wxBitmapButton* BitmapButton_TextFont1;
		wxStaticText* StaticText15;
		wxStaticText* StaticText26;
		wxBitmapButton* BitmapButton_FireworksCount;
		wxBitmapButton* BitmapButton_Palette4;
		wxStaticText* StaticText8;
		wxSlider* Slider_Snowstorm_Length;
		wxStaticText* StaticText28;
		wxStaticText* StaticText30;
		wxBitmapButton* BitmapButton_CirclesRadial;
		wxPanel* Panel1_Butterfly;
		wxPanel* Panel1_Spirals;
		wxBitmapButton* BitmapButton_MeteorsSwirlIntensity;
		wxBitmapButton* BitmapButton_GarlandsSpacing;
		wxSlider* Slider_Piano_Keyboard;
		wxSlider* Slider_Circles_Size;
		wxCheckBox* CheckBox_Group_Arches2;
		wxSlider* Slider_Snowstorm_Count;
		wxBitmapButton* BitmapButton_Palette3;
		wxBitmapButton* BitmapButton_SpiralsCount;
		wxSlider* Slider_Fireworks_Count;
		wxCheckBox* CheckBox_Bars_3D;
		wxSlider* Slider_Butterfly_Chunks;
		wxStaticText* StaticText2;
		wxStaticText* StaticText1;
		wxSlider* Slider_Text_Position2;
		wxPanel* Panel1_Text;
		wxStaticText* StaticText83;
		wxBitmapButton* BitmapButton_ColorWashHFade;
		wxStaticText* StaticText38;
		wxStaticText* StaticText17;
		wxStaticText* StaticText91;
		wxBitmapButton* BitmapButton_Speed;
		wxBitmapButton* BitmapButton_FireworksFade;
		wxStaticText* StaticText11;
		wxStaticText* StaticText102;
		wxBitmapButton* BitmapButton_PicturesFilename;
		wxChoice* Choice_Text_Count2;
		wxNotebook* Notebook_Text1;
		wxCheckBox* CheckBox_Spirograph_Animate;
		wxCheckBox* CheckBox_Circles_Bounce;
		wxStaticText* StaticText9;
		wxSlider* Slider_Spirals_Direction;
		wxBitmapButton* BitmapButton_SpiralsRotation;
		wxCheckBox* CheckBox_Spirlas_Shrink;
		wxBitmapButton* BitmapButton_SnowstormLength;
		wxButton* Button_Palette2;
		wxCheckBox* CheckBox_Spirals_3D;
		wxPanel* Panel1_Bars;
		wxPanel* Panel1_Snowstorm;
		wxStaticText* StaticText134;
		wxStaticText* StaticText3;
		wxBitmapButton* BitmapButton_TextLine2;
		//*)

	protected:

		//(*Identifiers(EffectsPanel)
		static const long ID_PANEL4;
		static const long ID_STATICTEXT25;
		static const long ID_SLIDER_Bars_BarCount;
		static const long ID_BITMAPBUTTON_SLIDER_Bars_BarCount;
		static const long ID_STATICTEXT26;
		static const long ID_CHOICE_Bars_Direction;
		static const long ID_BITMAPBUTTON_CHOICE_Bars_Direction;
		static const long ID_CHECKBOX_Bars_Highlight;
		static const long ID_BITMAPBUTTON_CHECKBOX_Bars_Highlight;
		static const long ID_CHECKBOX_Bars_3D;
		static const long ID_BITMAPBUTTON_CHECKBOX_Bars_3D;
		static const long ID_PANEL8;
		static const long ID_STATICTEXT27;
		static const long ID_CHOICE_Butterfly_Colors;
		static const long ID_BITMAPBUTTON_CHOICE_Butterfly_Color;
		static const long ID_STATICTEXT28;
		static const long ID_SLIDER_Butterfly_Style;
		static const long ID_BITMAPBUTTON_SLIDER_Butterfly_Style;
		static const long ID_STATICTEXT30;
		static const long ID_SLIDER_Butterfly_Chunks;
		static const long ID_BITMAPBUTTON_SLIDER_Butterfly_Chunks;
		static const long ID_STATICTEXT31;
		static const long ID_SLIDER_Butterfly_Skip;
		static const long ID_BITMAPBUTTON_SLIDER_Butterfly_Skip;
		static const long ID_PANEL10;
		static const long ID_STATICTEXT137;
		static const long ID_SLIDER_Circles_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Circles_Count;
		static const long ID_STATICTEXT138;
		static const long ID_SLIDER_Circles_Size;
		static const long ID_BITMAPBUTTON_SLIDER_Circles_Size;
		static const long ID_CHECKBOX_Circles_Bounce;
		static const long ID_BITMAPBUTTON_CHECKBOX_Circles_Bounce;
		static const long ID_CHECKBOX_Circles_Collide;
		static const long ID_BITMAPBUTTON_CHECKBOX_Circles_Collide;
		static const long ID_CHECKBOX_Circles_Radial;
		static const long ID_BITMAPBUTTON_CHECKBOX_Circles_Radial;
		static const long ID_CHECKBOX_Circles_Plasma;
		static const long ID_BITMAPBUTTON_CHECKBOX_Circles_Plasma;
		static const long ID_CHECKBOX_Circles_Radial_3D;
		static const long ID_BITMAPBUTTON_CHECKBOX_Circles_Radial_3D;
		static const long ID_CHECKBOX_Circles_Random_m;
		static const long ID_BITMAPBUTTON_CHECKBOX_Circles_Random_m;
		static const long ID_PANEL37;
		static const long ID_STATICTEXT21;
		static const long ID_SLIDER_ColorWash_Count;
		static const long ID_BITMAPBUTTON_SLIDER_ColorWash_Count;
		static const long ID_STATICTEXT32;
		static const long ID_CHECKBOX_ColorWash_HFade;
		static const long ID_BITMAPBUTTON_CHECKBOX_ColorWash_HFade;
		static const long ID_STATICTEXT33;
		static const long ID_CHECKBOX_ColorWash_VFade;
		static const long ID_BITMAPBUTTON_CHECKBOX_ColorWash_VFade;
		static const long ID_PANEL5;
		static const long ID_STATICTEXT6;
		static const long ID_CHOICE_Curtain_Edge;
		static const long ID_BITMAPBUTTON_CHOICE_Curtain_Edge;
		static const long ID_STATICTEXT5;
		static const long ID_CHOICE_Curtain_Effect;
		static const long ID_BITMAPBUTTON_CHOICE_Curtain_Effect;
		static const long ID_STATICTEXT7;
		static const long ID_SLIDER_Curtain_Swag;
		static const long ID_BITMAPBUTTON_SLIDER_Curtain_Swag;
		static const long ID_CHECKBOX_Curtain_Repeat;
		static const long ID_BITMAPBUTTON_CHECKBOX_Curtain_Repeat;
		static const long ID_PANEL1;
		static const long ID_STATICTEXT84;
		static const long ID_SLIDER_Fire_Height;
		static const long ID_BITMAPBUTTON_SLIDER_Fire_Height;
		static const long ID_STATICTEXT133;
		static const long ID_SLIDER_Fire_HueShift;
		static const long ID_BITMAPBUTTON_SLIDER_Fire_HueShift;
		static const long ID_STATICTEXT135;
		static const long ID_CHECKBOX_Fire_GrowFire;
		static const long ID_BITMAPBUTTON_CHECKBOX_Fire_GrowFire;
		static const long ID_PANEL12;
		static const long ID_STATICTEXT95;
		static const long ID_SLIDER_Fireworks_Number_Explosions;
		static const long ID_BITMAPBUTTON_SLIDER_Fireworks_Number_Explosions;
		static const long ID_STATICTEXT92;
		static const long ID_SLIDER_Fireworks_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Fireworks_Count;
		static const long ID_STATICTEXT94;
		static const long ID_SLIDER_Fireworks_Velocity;
		static const long ID_BITMAPBUTTON_SLIDER_Fireworks_Velocity;
		static const long ID_STATICTEXT96;
		static const long ID_SLIDER_Fireworks_Fade;
		static const long ID_BITMAPBUTTON_SLIDER_Fireworks_Fade;
		static const long ID_PANEL36;
		static const long ID_STATICTEXT34;
		static const long ID_SLIDER_Garlands_Type;
		static const long ID_BITMAPBUTTON_SLIDER_Garlands_Type;
		static const long ID_STATICTEXT35;
		static const long ID_SLIDER_Garlands_Spacing;
		static const long ID_BITMAPBUTTON_SLIDER_Garlands_Spacing;
		static const long ID_PANEL14;
		static const long ID_STATICTEXT36;
		static const long ID_SLIDER_Life_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Life_Count;
		static const long ID_STATICTEXT37;
		static const long ID_SLIDER_Life_Seed;
		static const long ID_BITMAPBUTTON_SLIDER_Life_Seed;
		static const long ID_PANEL16;
		static const long ID_STATICTEXT39;
		static const long ID_CHOICE_Meteors_Type;
		static const long ID_BITMAPBUTTON_CHOICE_Meteors_Type;
		static const long ID_STATICTEXT129;
		static const long ID_CHOICE_Meteors_Effect;
		static const long ID_BITMAPBUTTON_CHOICE_Meteors_Effect;
		static const long ID_STATICTEXT41;
		static const long ID_SLIDER_Meteors_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Meteors_Count;
		static const long ID_STATICTEXT43;
		static const long ID_SLIDER_Meteors_Length;
		static const long ID_BITMAPBUTTON_SLIDER_Meteors_Length;
		static const long ID_STATICTEXT131;
		static const long ID_SLIDER_Meteors_Swirl_Intensity;
		static const long ID_BITMAPBUTTON_SLIDER_Meteors_Swirl_Intensity;
		static const long ID_PANEL18;
		static const long ID_STATICTEXT1;
		static const long ID_SLIDER_Piano_Keyboard;
		static const long ID_BITMAPBUTTON_SLIDER_Piano_Keyboard;
		static const long ID_STATICTEXT4;
		static const long ID_PANEL39;
		static const long ID_BUTTON_PICTURES_FILENAME;
		static const long ID_BITMAPBUTTON_BUTTON_PICTURES_FILENAME;
		static const long ID_TEXTCTRL_Pictures_Filename;
		static const long ID_STATICTEXT46;
		static const long ID_CHOICE_Pictures_Direction;
		static const long ID_BITMAPBUTTON_CHOICE_Pictures_Direction;
		static const long ID_STATICTEXT97;
		static const long ID_SLIDER_Pictures_GifSpeed;
		static const long ID_BITMAPBUTTON_SLIDER_Pictures_GifSpeed;
		static const long ID_PANEL20;
		static const long ID_STATICTEXT80;
		static const long ID_SLIDER_Snowflakes_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Snowflakes_Count;
		static const long ID_STATICTEXT81;
		static const long ID_SLIDER_Snowflakes_Type;
		static const long ID_BITMAPBUTTON_SLIDER_Snowflakes_Type;
		static const long ID_PANEL22;
		static const long ID_STATICTEXT45;
		static const long ID_SLIDER_Snowstorm_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Snowstorm_Count;
		static const long ID_STATICTEXT51;
		static const long ID_SLIDER_Snowstorm_Length;
		static const long ID_BITMAPBUTTON_SLIDER_Snowstorm_Length;
		static const long ID_PANEL24;
		static const long ID_STATICTEXT38;
		static const long ID_SLIDER_Spirals_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Spirals_Count;
		static const long ID_STATICTEXT40;
		static const long ID_SLIDER_Spirals_Rotation;
		static const long ID_BITMAPBUTTON_SLIDER_Spirals_Rotation;
		static const long ID_STATICTEXT42;
		static const long ID_SLIDER_Spirals_Thickness;
		static const long ID_BITMAPBUTTON_SLIDER_Spirals_Thickness;
		static const long ID_STATICTEXT44;
		static const long ID_SLIDER_Spirals_Direction;
		static const long ID_BITMAPBUTTON_SLIDER_Spirals_Direction;
		static const long ID_CHECKBOX_Spirals_Blend;
		static const long ID_BITMAPBUTTON_CHECKBOX_Spirals_Blend;
		static const long ID_CHECKBOX_Spirals_3D;
		static const long ID_BITMAPBUTTON_CHECKBOX_Spirals_3D;
		static const long ID_CHECKBOX_Spirals_Grow;
		static const long ID_BITMAPBUTTON_CHECKBOX_Spirals_Grow;
		static const long ID_CHECKBOX_Spirals_Shrink;
		static const long ID_BITMAPBUTTON_CHECKBOX_Spirals_Shrink;
		static const long ID_PANEL26;
		static const long ID_STATICTEXT88;
		static const long ID_SLIDER_Spirograph_R;
		static const long ID_BITMAPBUTTON_SLIDER_Spirograph_R;
		static const long ID_STATICTEXT89;
		static const long ID_SLIDER_Spirograph_r;
		static const long ID_BITMAPBUTTON_SLIDER_Spirograph_r;
		static const long ID_STATICTEXT90;
		static const long ID_SLIDER_Spirograph_d;
		static const long ID_BITMAPBUTTON_SLIDER_Spirograph_d;
		static const long ID_STATICTEXT93;
		static const long ID_CHECKBOX_Spirograph_Animate;
		static const long ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate;
		static const long ID_STATICTEXT91;
		static const long ID_PANEL35;
		static const long ID_STATICTEXT53;
		static const long ID_TEXTCTRL_Text_Line1;
		static const long ID_BITMAPBUTTON_TEXTCTRL_Text_Line1;
		static const long ID_STATICTEXT54;
		static const long ID_TEXTCTRL_Text_Line2;
		static const long ID_BITMAPBUTTON_TEXTCTRL_Text_Line2;
		static const long ID_BUTTON_TEXT_FONT1;
		static const long ID_TEXTCTRL_Text_Font1;
		static const long ID_BITMAPBUTTON_TEXTCTRL_Text_Font1;
		static const long ID_STATICTEXT79;
		static const long ID_CHOICE_Text_Dir1;
		static const long ID_BITMAPBUTTON_CHOICE_Text_Dir1;
		static const long ID_STATICTEXT108;
		static const long ID_CHOICE_Text_Effect1;
		static const long ID_BITMAPBUTTON_CHOICE_Text_Effect1;
		static const long ID_STATICTEXT99;
		static const long ID_CHOICE_Text_Count1;
		static const long ID_BITMAPBUTTON_CHOICE_Text_Count1;
		static const long ID_STATICTEXT101;
		static const long ID_SLIDER_Text_Position1;
		static const long ID_BITMAPBUTTON_SLIDER_Text_Position1;
		static const long ID_PANEL_Text1;
		static const long ID_BUTTON_TEXT_FONT2;
		static const long ID_TEXTCTRL_Text_Font2;
		static const long ID_BITMAPBUTTON_TEXTCTRL_Text_Font2;
		static const long ID_STATICTEXT57;
		static const long ID_CHOICE_Text_Dir2;
		static const long ID_BITMAPBUTTON_CHOICE_Text_Dir2;
		static const long ID_STATICTEXT109;
		static const long ID_CHOICE_Text_Effect2;
		static const long ID_BITMAPBUTTON_CHOICE_Text_Effect2;
		static const long ID_STATICTEXT104;
		static const long ID_CHOICE_Text_Count2;
		static const long ID_BITMAPBUTTON_CHOICE_Text_Count2;
		static const long ID_STATICTEXT103;
		static const long ID_SLIDER_Text_Position2;
		static const long ID_BITMAPBUTTON_SLIDER_Text_Position2;
		static const long ID_PANEL_Text2;
		static const long ID_NOTEBOOK_Text1;
		static const long ID_PANEL7;
		static const long ID_STATICTEXT87;
		static const long ID_SLIDER_Tree_Branches;
		static const long ID_BITMAPBUTTON_SLIDER_Tree_Branches;
		static const long ID_PANEL34;
		static const long ID_STATICTEXT86;
		static const long ID_SLIDER_Twinkle_Count;
		static const long ID_BITMAPBUTTON_SLIDER_Twinkle_Count;
		static const long ID_STATICTEXT105;
		static const long ID_SLIDER_Twinkle_Steps;
		static const long ID_BITMAPBUTTON_SLIDER_Twinkle_Steps;
		static const long ID_CHECKBOX_Twinkle_Strobe;
		static const long ID_BITMAPBUTTON_CHECKBOX_Twinkle_Strobe;
		static const long ID_PANEL33;
		static const long ID_STATICTEXT8;
		static const long ID_SLIDER_Color_Mix1;
		static const long ID_STATICTEXT9;
		static const long ID_SLIDER_Chase_Spacing1;
		static const long ID_STATICTEXT10;
		static const long ID_SLIDER_Chase_Speed1;
		static const long ID_STATICTEXT11;
		static const long ID_CHECKBOX_Group_Arches1;
		static const long ID_STATICTEXT12;
		static const long ID_CHECKBOX_R_TO_L1;
		static const long ID_PANEL3;
		static const long ID_STATICTEXT13;
		static const long ID_SLIDER_Color_Mix2;
		static const long ID_STATICTEXT14;
		static const long ID_SLIDER_Chase_Spacing2;
		static const long ID_STATICTEXT15;
		static const long ID_SLIDER_Chase_Speed2;
		static const long ID_STATICTEXT16;
		static const long ID_CHECKBOX_Group_Arches2;
		static const long ID_STATICTEXT17;
		static const long ID_CHECKBOX_R_TO_L2;
		static const long ID_PANEL6;
		static const long ID_NOTEBOOK1;
		static const long ID_PANEL2;
		static const long ID_CHOICEBOOK1;
		static const long ID_BITMAPBUTTON_CHOICEBOOK1;
		static const long ID_BITMAPBUTTON87;
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON88;
		static const long ID_CHECKBOX_Palette1;
		static const long ID_BUTTON_Palette1;
		static const long ID_BITMAPBUTTON_BUTTON_Palette1;
		static const long ID_CHECKBOX_Palette2;
		static const long ID_BUTTON_Palette2;
		static const long ID_BITMAPBUTTON_BUTTON_Palette2;
		static const long ID_CHECKBOX_Palette3;
		static const long ID_BUTTON_Palette3;
		static const long ID_BITMAPBUTTON_BUTTON_Palette3;
		static const long ID_CHECKBOX_Palette4;
		static const long ID_BUTTON_Palette4;
		static const long ID_BITMAPBUTTON_BUTTON_Palette4;
		static const long ID_CHECKBOX_Palette5;
		static const long ID_BUTTON_Palette5;
		static const long ID_BITMAPBUTTON_BUTTON_Palette5;
		static const long ID_CHECKBOX_Palette6;
		static const long ID_BUTTON_Palette6;
		static const long ID_BITMAPBUTTON_BUTTON_Palette6;
		static const long ID_STATICTEXT61;
		static const long ID_SLIDER_Speed;
		static const long ID_BITMAPBUTTON_SLIDER_Speed;
		static const long ID_TEXTCTRL_Speed;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL_Fadein;
		static const long ID_BITMAPBUTTON_TEXTCTRL_Fadein;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL_Fadeout;
		static const long ID_BITMAPBUTTON_TEXTCTRL_Fadeout;
		static const long ID_CHECKBOX_FitToTime;
		static const long ID_BITMAPBUTTON_CHECKBOX_FitToTime;
		//*)

	private:

		//(*Handlers(EffectsPanel)
		void OnButton_Pictures_FilenameClick(wxCommandEvent& event);
		void OnButton_Text_Font1Click(wxCommandEvent& event);
		void OnButton_Text_Font2Click(wxCommandEvent& event);
		void OnCheckBox_PaletteClick(wxCommandEvent& event);
		void OnButton_PaletteNumberClick(wxCommandEvent& event);
		void OnChoicebook1PageChanged(wxChoicebookEvent& event);
		void OnButton_PaletteClick(wxCommandEvent& event);
		void OnSlider_SpeedCmdScroll(wxScrollEvent& event);
		void OnBitmapButton_FireworksCountClick(wxCommandEvent& event);
		void OnBitmapButton_LayerEffectClick(wxCommandEvent& event);
		void OnBitmapButton_Palette1Click(wxCommandEvent& event);
		void OnBitmapButton_Palette2Click(wxCommandEvent& event);
		void OnBitmapButton_Palette3Click(wxCommandEvent& event);
		void OnBitmapButton_Palette4Click(wxCommandEvent& event);
		void OnBitmapButton_Palette5Click(wxCommandEvent& event);
		void OnBitmapButton_Palette6Click(wxCommandEvent& event);
		void OnBitmapButton_SpeedClick(wxCommandEvent& event);
		void OnBitmapButton_FadeOutClick(wxCommandEvent& event);
		void OnBitmapButton_FadeInClick(wxCommandEvent& event);
		void OnBitmapButton_FitToTimeClick(wxCommandEvent& event);
		void OnBitmapButton_PaletteRepClick(wxCommandEvent& event);
		void OnBitmapButton_DirectionClick(wxCommandEvent& event);
		void OnBitmapButton_HighlightClick(wxCommandEvent& event);
		void OnBitmapButton_3DClick(wxCommandEvent& event);
		void OnBitmapButton_ButterflyColorsClick(wxCommandEvent& event);
		void OnBitmapButton_ButterflyStyleClick(wxCommandEvent& event);
		void OnBitmapButton_ButterflyChunksClick(wxCommandEvent& event);
		void OnBitmapButton_ButterflySkipClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesCountClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesSizeClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesBounceClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesRadialClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesRadial3DClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesCollideClick(wxCommandEvent& event);
		void OnBitmapButton_CirclesPlasmaClick(wxCommandEvent& event);
		void OnBitmapButton_RandomMotionClick(wxCommandEvent& event);
		void OnBitmapButton_ColorWashCountClick(wxCommandEvent& event);
		void OnBitmapButton_ColorWashHFadeClick(wxCommandEvent& event);
		void OnBitmapButton_ColorWashVFadeClick(wxCommandEvent& event);
		void OnBitmapButton_CurtainEdgeClick(wxCommandEvent& event);
		void OnBitmapButton_CurtainEffectClick(wxCommandEvent& event);
		void OnBitmapButton_CurtainSwagClick(wxCommandEvent& event);
		void OnBitmapButton_CurtainRepeatClick(wxCommandEvent& event);
		void OnBitmapButton_FireHeightClick(wxCommandEvent& event);
		void OnBitmapButton_FireWidthClick(wxCommandEvent& event);
		void OnBitmapButton_FireGrowClick(wxCommandEvent& event);
		void OnBitmapButton_FireworksNumberExplosionsClick(wxCommandEvent& event);
		void OnBitmapButton_FireworksVelocityClick(wxCommandEvent& event);
		void OnBitmapButton_FireworksFadeClick(wxCommandEvent& event);
		void OnBitmapButton_GarlandsTypeClick(wxCommandEvent& event);
		void OnBitmapButton_GarlandsSpacingClick(wxCommandEvent& event);
		void OnBitmapButton_LifeCountClick(wxCommandEvent& event);
		void OnBitmapButton_LifeSpeedClick(wxCommandEvent& event);
		void OnBitmapButton_MeteorsTypeClick(wxCommandEvent& event);
		void OnBitmapButton_MeteorsEffectClick(wxCommandEvent& event);
		void OnBitmapButton_MeteorsCountClick(wxCommandEvent& event);
		void OnBitmapButton_MeteorsLengthClick(wxCommandEvent& event);
		void OnBitmapButton_MeteorsSwirlIntensityClick(wxCommandEvent& event);
		void OnBitmapButton_PianoKeyboardClick(wxCommandEvent& event);
		void OnBitmapButton_PicturesFilenameClick(wxCommandEvent& event);
		void OnBitmapButton_PicturesDirectionClick(wxCommandEvent& event);
		void OnBitmapButton_PicturesSpeedClick(wxCommandEvent& event);
		void OnBitmapButton_SnowflakesCountClick(wxCommandEvent& event);
		void OnBitmapButton_SnowflakesTypeClick(wxCommandEvent& event);
		void OnBitmapButton_SnowstormCountClick(wxCommandEvent& event);
		void OnBitmapButton_SnowstormLengthClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsCountClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsRotationClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsThicknessClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsDirectionClick(wxCommandEvent& event);
		void OnBitmapButton_Spirals3DClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsShrinkClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsBlendClick(wxCommandEvent& event);
		void OnBitmapButton_SpiralsGrowClick(wxCommandEvent& event);
		void OnBitmapButton_SpirographRClick(wxCommandEvent& event);
		void OnBitmapButton_SpirographrClick(wxCommandEvent& event);
		void OnBitmapButton_SpirographAnimateClick(wxCommandEvent& event);
		void OnBitmapButton_SpirographdClick(wxCommandEvent& event);
		void OnBitmapButton_TextLine1Click(wxCommandEvent& event);
		void OnBitmapButton_TextLine2Click(wxCommandEvent& event);
		void OnBitmapButton_TextFont1Click(wxCommandEvent& event);
		void OnBitmapButton_TextDir1Click(wxCommandEvent& event);
		void OnBitmapButton_TextEffect1Click(wxCommandEvent& event);
		void OnBitmapButton_TextCount1Click(wxCommandEvent& event);
		void OnBitmapButton_TextPosition1Click(wxCommandEvent& event);
		void OnBitmapButton_TextFont2Click(wxCommandEvent& event);
		void OnBitmapButton_TextDir2Click(wxCommandEvent& event);
		void OnBitmapButton_TextEffect2Click(wxCommandEvent& event);
		void OnBitmapButton_TextCount2Click(wxCommandEvent& event);
		void OnBitmapButton_TextPosition2Click(wxCommandEvent& event);
		void OnBitmapButton_TreeBranchesClick(wxCommandEvent& event);
		void OnBitmapButton_TwinkleCountClick(wxCommandEvent& event);
		void OnBitmapButton_TwinkleStepsClick(wxCommandEvent& event);
		void OnBitmapButton_TwinkleStrobeClick(wxCommandEvent& event);
		//*)

        void UpdateFont(wxTextCtrl* FontCtrl);
        void SetButtonColor(wxButton* btn, const wxColour* c);
        int GetRandomSliderValue(wxSlider* slider);
        wxString GetAttrPrefix();
        wxString GetEffectStringFromWindow(wxWindow *ParentWin);

//add lock/unlock/random state flags -DJ
//these could be used to make fields read-only, but initially they are just used for partially random effects
//#include <unordered_map>
        typedef enum { Normal, Locked, Random } EditState;
        std::unordered_map<std::string, EditState> buttonState;
        bool isRandom_(wxControl* ctl, const char*debug);
#define isRandom(ctl)  isRandom_(ctl, #ctl) //(buttonState[std::string(ctl->GetName())] == Random)
        void setlock(wxBitmapButton* button); //, EditState& islocked);
//friend class xLightsFrame; //debug only
        wxCheckBox* GetPaletteCheckbox(int idx);
        wxButton* GetPaletteButton(int idx);

		DECLARE_EVENT_TABLE()
public:
        bool isRandom_(void);
};

#endif

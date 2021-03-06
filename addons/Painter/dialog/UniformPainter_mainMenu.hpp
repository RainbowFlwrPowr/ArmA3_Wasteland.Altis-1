// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
#define Paint_Menu_dialog 17000
#define Paint_Menu_option 17001

class Paint_Menu
{
	idd = Paint_Menu_dialog;
	movingEnable=1;
	onLoad = "uiNamespace setVariable ['Paint_Menu', _this select 0]";

	class controlsBackground {

		class Paint_Menu_background:w_RscPicture
		{
			idc=-1;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0};
			text = "#(argb,8,8,3)color(0,0,0,0.6)";
			x=0.28;
			y=0.10;
			w=0.3505;
			h=0.70;
		};

		class TopBar: w_RscPicture
		{
			idc = -1;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0};
			text = "#(argb,8,8,3)color(0.25,0.51,0.96,0.8)";

			x=0.28;
			y=0.10;
			w=0.3505;
			h=0.05;
		};

		class Paint_Menu_Title:w_RscText
		{
			idc=-1;
			text="Paint Uniform Menu";
			x=0.30;
			y=0.098;
			w=0.31;
			h=0.035;
		};
		class Paint_Menu_Title2:w_RscText
		{
			idc=-1;
			text="(is reset at death, relog and death)";
			x=0.30;
			y=0.116;
			w=0.31;
			h=0.035;
		};
	};

	class controls {

		class Paint_Menu_options:w_Rsclist
		{
			idc = Paint_Menu_option;
			x=0.30;
			y=0.18;
			w=0.31;
			h=0.49;
		};

		class Paint_Menu_activate:w_RscButton
		{
			idc=-1;
			text="Select";
			onButtonClick = "[1] execVM 'addons\Painter\UniformPainter_optionSelect.sqf'";
			x=0.325;
			y=0.70;
			w=0.11;
			h=0.071;
		};
		
		class Paint_Menu_deactivate:w_RscButton
		{
			idc=-1;
			text="Cancel";
			onButtonClick = "closeDialog 0;";
			x=0.475;
			y=0.70;
			w=0.11;
			h=0.071;
		};

	};
};


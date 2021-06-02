//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

//GIT pull and commit sample 
Action()
{
	lr_start_transaction("T01_AOS_LaunchHomePage");
	truclient_step("1", "Navigate to 'advantageonlineshopping.com'", "snapshot=Action_1.inf");
	lr_end_transaction("T01_AOS_LaunchHomePage",0);
	lr_start_transaction("T02_AOS_ClickSpeakers");
	truclient_step("2", "Click on SPEAKERS Shop Now", "snapshot=Action_2.inf");
	lr_end_transaction("T02_AOS_ClickSpeakers",0);
	lr_start_transaction("T03_AOS_SelectRoarMini");
	truclient_step("3", "Click on image (1) image", "snapshot=Action_3.inf");
	lr_end_transaction("T03_AOS_SelectRoarMini",0);
	lr_start_transaction("T04_AOS_AddToCart");
	truclient_step("6", "Click on ADD TO CART button", "snapshot=Action_6.inf");
	lr_end_transaction("T04_AOS_AddToCart",0);
	truclient_step("8", "Click on button (1) button", "snapshot=Action_8.inf");
	lr_start_transaction("T05_AOS_CheckOut");
	truclient_step("10", "Click on CHECKOUT ($44.99) button", "snapshot=Action_10.inf");
	lr_end_transaction("T05_AOS_CheckOut",0);
	truclient_step("11", "Click on Username label", "snapshot=Action_11.inf");
	truclient_step("12", "Click on UsernameUsername textbox", "snapshot=Action_12.inf");
	truclient_step("13", "Type P_Username in UsernameUsername textbox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on PasswordPassword passwordbox", "snapshot=Action_14.inf");
	truclient_step("15", "Type ******* in PasswordPassword passwordbox", "snapshot=Action_15.inf");
	lr_start_transaction("T05_AOS_LogIn");
	truclient_step("16", "Click on LOGIN button", "snapshot=Action_16.inf");
	lr_end_transaction("T05_AOS_LogIn",0);
	truclient_step("17", "Click on NEXT button", "snapshot=Action_17.inf");
	truclient_step("18", "Click on SafePay username label", "snapshot=Action_18.inf");
	truclient_step("19", "Type perfuser in *SafePay usernameSafePay... textbox", "snapshot=Action_19.inf");
	truclient_step("20", "Click on *SafePay passwordSafePay... passwordbox", "snapshot=Action_20.inf");
	truclient_step("21", "Type ******* in *SafePay passwordSafePay... passwordbox", "snapshot=Action_21.inf");
	lr_start_transaction("T06_AOS_PayNow");
	truclient_step("22", "Click on PAY NOW button", "snapshot=Action_22.inf");
	lr_end_transaction("T06_AOS_PayNow",0);
	truclient_step("23", "Click on perfuser JavaScript link", "snapshot=Action_23.inf");
	lr_start_transaction("T07_AOS_SignOut");
	truclient_step("25", "Double click on Sign out label", "snapshot=Action_25.inf");
	lr_end_transaction("T07_AOS_SignOut",0);

	return 0;
}

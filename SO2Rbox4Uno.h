/*
SO2Rbox.h
*/

//------------------------------------------------------------------

//#include <Wire.h>			// Arduino IDE のI2Cライブラリ
//#include <LcdCore.h>		// LCDコアライブラリ
//#include <LCD_ACM1602NI.h>	// 秋月I2C液晶用のI/Oライブラリ
//LCD_ACM1602NI lcd(0xa0);	// 0xa0はI2Cアドレス
//#include <LiquidCrystal_I2C.h>
//LiquidCrystal_I2C lcd(0xa0,16,2)

//-------------------------------------------------------------------
//                   0123456789012345
#define message00	"JI1FLB SO2R Box "
#define message01	"<Rig- L><Rig- R>"
#define message02	"Left      Locked"
#define message03	"Right     Locked"
#define message04	"--------        "
#define message05	"        --------"
#define message06	"--------"
#define message07	"Rx Tx   --------"
#define message08	"Rx  "
#define message09	"RxS "
#define message10	"RxR "
#define message11	"Tx  "
#define message12	"-------- Rx Tx  "
#define message13	"Rx Tx  Rx       "
#define message14	"Rx     Rx   Tx  "
#define message15	" Locked --------"
#define message16	"-------  Locked "
#define message17	"----"
#define message18	"Left  ST  Locked"
#define message19	"Right ST  Locked"


// Definition of constants and pin numbers
// Constants for Locked Rig

	const	int		Rig1PushSwPort = 2 ;	// Constants for Locked Rig
	const	int		Rig2PushSwPort = 3 ;	// Constants for Locked Rig
	const	int		StereoPushSwPort = 1 ;	// Constants for Locked Rig

	const	int		RX_cont_RL1 = 4 ;
	const	int		RX_cont_RL2 = 5 ;
	const	int		TX_sw_RL = 6 ;
	const	int		CW_padle = 7 ;

	const	int		AUX0_1 = 8 ;
	const	int		AUX0_2  = 9;
	const	int		AUX0_4  = 10 ;
	const	int		AUX0_8  = 11 ;

	const	int		Reverse = 12 ;
	const	int		Stereo = 13 ;
	
	const	int		DVKm1 = 8 ;
	const	int		DVKm2 = 9 ;
	const	int		DVKm3 = 10 ;
	const	int		DVKm4 = 11 ;


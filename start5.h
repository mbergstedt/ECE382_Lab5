//-----------------------------------------------------------------
// Name:	Coulston
// File:	lab5.h
// Date:	Fall 2014
// Purp:	Include file for the MSP430
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Page 76 : MSP430 Optimizing C/C++ Compiler v 4.3 User's Guide
//-----------------------------------------------------------------
typedef		unsigned char		int8;
typedef		unsigned short		int16;
typedef		unsigned long		int32;
typedef		unsigned long long	int64;

#define		TRUE				1
#define		FALSE				0

//-----------------------------------------------------------------
// Function prototypes found in lab5.c
//-----------------------------------------------------------------
void initMSP430();
__interrupt void pinChange (void);
__interrupt void timerOverflow (void);


//-----------------------------------------------------------------
// Each PxIES bit selects the interrupt edge for the corresponding I/O pin.
//	Bit = 0: The PxIFGx flag is set with a low-to-high transition
//	Bit = 1: The PxIFGx flag is set with a high-to-low transition
//-----------------------------------------------------------------

#define		IR_PIN			(P2IN & BIT6)
#define		HIGH_2_LOW		P2IES |= BIT6
#define		LOW_2_HIGH		P2IES &= ~BIT6


#define		averageLogic0Pulse	0x01ea
#define		averageLogic1Pulse	0x0640
#define		averageStartPulse	0x224c
#define		standardDev			0x0082
#define		minLogic0Pulse		averageLogic0Pulse - standardDev
#define		maxLogic0Pulse		averageLogic0Pulse + standardDev
#define		minLogic1Pulse		averageLogic1Pulse - standardDev
#define		maxLogic1Pulse		averageLogic1Pulse + standardDev
#define		minStartPulse		averageStartPulse - standardDev
#define		maxStartPulse		averageStartPulse + standardDev

#define		PWR		0x02FD48B7
#define		ONE		0x02FD807F
#define		TWO		0x02FD40BF
#define		THR		0x02FDC03F

#define		VOL_UP	0x0AF548B7
#define		VOL_DW	0x0AF5A857
#define		CH_UP	0x0AF59867
#define		CH_DW	0x0AF518E7

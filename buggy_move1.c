typedef volatile unsigned int ioreg;
#include <stdlib.h>
#include <stdio.h>

#define	PIO_PER		(ioreg *) 0xfffff400	// PIO Enable Registe
#define	PIO_OER	  	(ioreg *) 0xfffff410	// Output Enable Register
#define	PIO_SODR  	(ioreg *) 0xfffff430	// Set Output Data Register
#define	PIO_CODR  	(ioreg *) 0xfffff434	// Clear Output Datauit Register
#define PIO_PDSR  (ioreg *) 0xFFFFF43C

// what is pdsr

#define Left_move 0x00000001
#define Right_move 0x00000002
#define Right_Direction 0x00000004
#define Opto_Sensor 1 << 20
#define Left_Direction 0x00000008
#define DELAY 0x00004000


#define OUTPUTS Left_move|Right_move

void delay(int count)
{
	register int i;
	for (i=count;i>0;i--);
}



int main(void)
{

  *PIO_CODR = OUTPUTS;
  *PIO_PER = OUTPUTS;
  *PIO_OER = OUTPUTS;
	// *PIO_SODR = OUTPUTS;
	// *PIO_CODR = Right_Direction;

	int rand1;
  while(1){

}

}
// #def}ine PIO_IDENTIFIER 0x00000004

// int main(void) {
//    *PIO_PER = OUTPUTS|INPUTS; // enable control of I/O pins from PIO Controller
//    *PIO_OER = OUTPUTS; // enable output drivers for relevant pins
//    *PIO_IFER = INPUTS; // enable glitch filters on inputs
// *PMC_PCER = PIO_IDENTIFIER; // enable clock for Parallel I/O (so that it responds to inputs)
// }

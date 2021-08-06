/* Learn-in-depth 
Unit 3 lesson 3 
Eng : Mostafa Gamal 
*/ 

MEMORY 
{
  flash(RX) : ORIGIN = 0x08000000 , LENGTH = 128k 
  sram(RWX) : ORIGIN = 0x20000000 , LENGTH = 20k 
}

SECTIONS 
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
	} > flash

	.bss : {
		*(.bss)
	}> sram

}
#include <stdio.h>

/*
 *
 *	TanımlayiciAdi   Gecerli\ Gecersiz   GeçersizlikGerekçesi
 *	
 *	Return           Gecerli
 *	_X		 Gecerli
 *	x.y		 Gecersiz	     . isareti ozel bir ifade oldugundan dolayi kullanilamaz.
 *	2D		 Gecersiz	     Tanimlamalar sayilarla baslamaz.
 *	Masa Boyu 	 Gecersiz 	     Tanımlamalar birbirinden ayrı olarak tanımlanamaz.
 *
 *
 * */

int main()
{

	int Return;    // Tanımlanabilir.
	int _X;        // Tanımlanabilir.
	int x.y;       // Tanımlanamaz.         error: expected initializer before ‘.’ token
   	int 2D;        // Tanımlanamaz. 	error: expected unqualified-id before numeric constant
   	int Masa Boyu  // Tanımlanamaz 		error: expected initializer before ‘Boyu’

	return 0;
}

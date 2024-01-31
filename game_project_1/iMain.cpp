#include "iGraphics.h"

//মূলত আমি এখানে আমার জন্য এ গেমটা বানাইসি। এটা গ্রুপ প্রোজেক্ট হিসেবে দেয়ার জন্য না। Record করার জন্য এটা বানাইসি।
//@author AURNAB BARUA
//Student of AUST, CSE Department
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int image1, image2, image3,image4,image5,image6,image7,image8,image9,image10,image11,image12;
int mode_for_menu = 0, mode1 = 0, mode_for_level_1 = 0, mode3 = 0, mode_for_level_2 = 0, mode_for_level_3 = 0, mode_for_game_menu=0;
int len1 = 0, len2 = 0,len3=0;
int level = 1;
char letter1[5],letter2[3],letter3[5];
int coin = 10;
char word1[] = "WATER", word2[]="PEN",word3[]="HEAD";
int levelcomplete;
bool musicon;
int chance1 = 6,chance2=6,chance3=6, chanceimage1, chanceimage2, chanceimage3, chanceimage4, chanceimage5, chanceimage6;

void chancefunction(int chance){
	if (chance == 1){
		iShowImage(1003, 693, 481, 104, chanceimage1);
	}
	if (chance == 2){
		iShowImage(1003, 693, 481, 104, chanceimage2);
	}
	if (chance == 3){
		iShowImage(1003, 693, 481, 104, chanceimage3);
	}
	if (chance == 4){
		iShowImage(1003, 693, 481, 104, chanceimage4);
	}
	if (chance == 5){
		iShowImage(1003, 693, 481, 104, chanceimage5);
	}
	if (chance == 6){
		iShowImage(1003, 693, 481, 104, chanceimage6);
	}
}
void happy_or_angry(int mode){
	if (mode == 2){	
		iShowImage(503, 715, 310, 65, image7);
		iShowBMP(1203, 239, "FOR_HAPPY.bmp");
	}
	if (mode == 3){
		iShowImage(503, 715, 310, 65, image8);
		iShowBMP(1203, 239, "FOR_ANGRY.bmp");
	}
}

void level_1(){
	iClear();	
	
	iShowImage(0, 0, 1500, 800, image4);
	if (mode1 == 1){		
		iText(393, 424, letter1, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	happy_or_angry(mode_for_level_1);
	

	if (levelcomplete == 1){
		iShowImage(552, 97, 340, 70, image9);
	}
	
}

void level_2(){
	iClear();	
	
	iShowImage(0, 0, 1500, 800, image5);
	if (mode1 == 1){		
		iText(393, 424, letter2, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	happy_or_angry(mode_for_level_2);
	if (levelcomplete == 2){
		iShowImage(552, 97, 340, 70, image9);
	}
	
}

void level_3(){
	iClear();
	
	iShowImage(0, 0, 1500, 800, image6);
	if (mode1 == 1){		
		iText(393, 424, letter3, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	happy_or_angry(mode_for_level_3);
	if (levelcomplete == 3){
		iShowImage(552, 97, 340, 70, image9);
	}
	
}

void iDraw()
{	
	iShowImage(0, 0, 1530, 800, image1);	
	q:if (mode_for_menu == 1 || mode_for_menu==2){
		if (level == 1){
			level_1();
			chancefunction(chance1);
		}
		if (level == 2){
			level_2();
			chancefunction(chance2);
		}
		if (level == 3){
			level_3();
			chancefunction(chance3);
		}
		if (level == 4){
			iShowImage(0, 0, 1500, 800, image10);
		}
		if (chance1 == 0 || chance2==0 || chance3==0){
			iShowImage(0, 0, 1500, 800, image3);

		}
		if (mode_for_game_menu == 1){
			goto q;
		}
		
	}
	if (mode_for_menu == 3){
		iShowImage(0, 0, 1500, 800, image11);
		
	}
	if (mode_for_menu == 4){
		iShowImage(0, 0, 1500, 800, image12);
	}
	
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	printf("%d\t%d\n", mx, my);
	if (mx >= 90 && mx <= 535 && my >= 461 && my <= 523){
		mode_for_menu = 1;
	}
	if (mx >= 85 && mx <= 531 && my >= 363 && my <=424 ){
		mode_for_menu = 2;
	}

	if (mx >= 85 && mx <= 528 && my >= 268 && my <= 329){
		mode_for_menu = 3;
	}
	if (mx >= 83 && mx <= 527 && my >= 169 && my <=235 ){
		mode_for_menu = 4;
	}
	if (mx >= 77 && mx <= 530 && my >= 81 && my <= 141){
		mode_for_menu = 5;
	}
	if (mode_for_menu == 1 && mx >= 17 && mx <= 332 && my >= 37 && my <= 129){
		mode_for_game_menu = 1;
	}
	if (mx >= 333 && mx <= 983 && my >= 396 && my <=485 ){
		mode1 = 1;
	}
	if (mx >= 212 && mx <= 388 && my >= 100 && my <= 125){
		mode3 = 1;
	}
	if (levelcomplete==1 && mx >= 1170 && mx <= 1474 && my >= 33 && my <= 132){
		level = 2;
	}
	if (levelcomplete == 2 && mx >= 1170 && mx <= 1474 && my >= 33 && my <= 132){
		level = 3;
	}
	if (levelcomplete == 3 && mx >= 1170 && mx <= 1474 && my >= 33 && my <= 132){
		level = 4;
	}
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	

}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void level_1_keyboard(){
	if (letter1[len1] == word1[len1]){
		mode_for_level_1 = 2;
	}
	else{
		mode_for_level_1 = 3;
		len1--;
		chance1--;
	}
	len1++;
	if (len1 == 5){
		coin = coin + 10;
		printf("coin is %d\n", coin);
		levelcomplete = 1;		
	}
}

void level_2_keyboard(){
	if (letter2[len2] == word2[len2]){
		mode_for_level_2 = 2;
	}
	else{
		mode_for_level_2 = 3;
		len2--;
		chance2--;
	}
	len2++;
	if (len2 == 3){
		coin = coin + 10;
		printf("coin is %d\n", coin);
		levelcomplete = 2;
	}
}

void level_3_keyboard(){
	if (letter3[len3] == word3[len3]){
		mode_for_level_3 = 2;
	}
	else{
		mode_for_level_3 = 3;
		len3--;
		chance3--;
	}
	len3++;
	if (len3 == 4){
		coin = coin + 10;
		printf("coin is %d\n", coin);
		levelcomplete = 3;
	}
}
void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
	if (level == 1){
		letter1[len1] = key;
		level_1_keyboard();
	}
	
	if (level == 2){		
		letter2[len2] = key;
		level_2_keyboard();
	}
	if (level == 3){
		letter3[len3] = key;
		level_3_keyboard();
	}
	
}



/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (mode_for_menu == 4 && key == GLUT_KEY_RIGHT){
		musicon = true;
		if (musicon){
			PlaySound("Guitar House - josh pan.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

/*void coinconvert(int coin){
	
}*/


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1500, 800, "WORDSPELLER NNAF");
	///updated see the documentations
	
	image1=iLoadImage("145643133_922338251842742_173787151002059204_n.JPG");
	image2 = iLoadImage("download.jpg");
	image3 = iLoadImage("FOR_GAMEOVER.jpg");
	image4 = iLoadImage("FOR_LEVEL_1.JPG");
	image5 = iLoadImage("FOR_LEVEL_2.JPG");
	image6 = iLoadImage("FOR_LEVEL_3.JPG");
	image7 = iLoadImage("FOR_CORRECT.jpg");
	image8 = iLoadImage("FOR_WRONG.jpg");
	image9 = iLoadImage("FOR_LEVEL_COMPLETE.jpg");
	image10 = iLoadImage("FOR_COMPLETE_ALL_LEVELS.jpg");
	image11 = iLoadImage("FOR_INSTRUCTION.jpg");
	image12 = iLoadImage("FOR_OPTION.jpg");
	
	chanceimage1 = iLoadImage("FOR_1_CHANCE.jpg");
	chanceimage2 = iLoadImage("FOR_2_CHANCE.jpg");
	chanceimage3 = iLoadImage("FOR_3_CHANCE.jpg");
	chanceimage4 = iLoadImage("FOR_4_CHANCE.jpg");
	chanceimage5 = iLoadImage("FOR_5_CHANCE.jpg");
	chanceimage6 = iLoadImage("FOR_6_CHANCE.jpg");
	iStart();
	return 0;
}
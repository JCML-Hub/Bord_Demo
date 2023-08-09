//
// Created by mulai on 2023/6/18.
//

#ifndef BALANCECAR_V1_0_OLED_H
#define BALANCECAR_V1_0_OLED_H

/*
 * ʹ��OLED����ʾ
 * �������ʹ�ã�����ֵ��Ӧ��ͨ��
 * */
//#define ENABLEOLED  hi2c1

#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����

#ifdef ENABLEOLED
//�����Լ��û��Ŀ�����,��Ƭ��.h�ļ������Ӻ�Ҫ�ڴ˴�����
extern const unsigned char ICEC_LOGO[];
extern const unsigned char MyLogo[];
extern const unsigned char StickManTest[];

//�ײ㺯����
void OLED_WR_Byte(unsigned char dat, unsigned char cmd);

//�û�������
void OLED_Init(void);
void OLED_Clear(void);
void OLED_Full(void);
void OLED_Set_Pos(unsigned char x,unsigned char y);
void OLED_Clear_Part(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2);
void OLED_ShowNum(unsigned char x,unsigned char y,unsigned int num,unsigned char len,unsigned char size2);
void OLED_ShowChar(unsigned char x,unsigned char y,unsigned char chr,unsigned char Char_Size);
void OLED_ShowString(unsigned char x,unsigned char y,char *chr,unsigned char Char_Size);
void OLED_Show_A_Chinese(unsigned char x,unsigned char y,unsigned char *chr,unsigned char Char_Size);
void OLED_ShowChinese(unsigned char x,unsigned char y,char *chr,unsigned char Char_Size);
void ShowBmp(unsigned char *bmp);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
unsigned int oled_pow(unsigned char m,unsigned char n);
void OLED_ShowHexNum(unsigned char Line, unsigned char Column, unsigned int Number, unsigned char Length);
void OLED_ShowSignedNum(unsigned char x, unsigned char y, int num, unsigned char len, unsigned char size2);
void OLED_ShowBinNum(unsigned char x, unsigned char y, unsigned char num, unsigned char len, unsigned char size2);
void OLED_ShowFloatNum(unsigned char x, unsigned char y, float num, unsigned char len, unsigned char size2);
#endif
#endif //BALANCECAR_V1_0_OLED_H
//////////////////////////////////////////////BitMap UFU///////////////////////////////////////////
const uint8_t logoUFU[] U8G_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
    0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
    0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00,
    0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
    0x00, 0x30, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x70, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
    0x00, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
    0x03, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x07, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
    0x0F, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x1F, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
    0x3F, 0xF0, 0x1F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0xB0, 0x00, 0x00,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x67, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF,
    0x7F, 0xF0, 0x1F, 0xFF, 0xFF, 0x6F, 0xFF, 0xFF, 0x7F, 0xE0, 0x0F, 0xFF, 0xFE, 0xEF, 0xFF, 0xFF,
    0x7F, 0xF0, 0x00, 0x00, 0x01, 0xEF, 0xFF, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x03, 0xCF, 0xFF, 0xFE,
    0x7F, 0xFC, 0x00, 0x00, 0x07, 0x9F, 0xFF, 0xFE, 0x7F, 0xFE, 0x00, 0x00, 0x0F, 0x3F, 0xFF, 0xFE,
    0x3F, 0xFF, 0x00, 0x00, 0x1E, 0x7F, 0xFF, 0xFE, 0x1F, 0xFF, 0x80, 0x00, 0x3C, 0xFF, 0xFF, 0xFC,
    0x0F, 0xFF, 0xC0, 0x00, 0x79, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, 0xE0, 0x00, 0xFB, 0xFF, 0xFF, 0xF0,
    0x03, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xE0, 0x01, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xC0,
    0x00, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x00,
    0x00, 0x3F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0xFF, 0xFF, 0xFC, 0x00,
    0x00, 0x0F, 0xFF, 0xF9, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xF3, 0xFF, 0xFF, 0xF0, 0x00,
    0x00, 0x03, 0xFF, 0xE7, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xEF, 0xFF, 0xFF, 0xC0, 0x00,
    0x00, 0x00, 0xFF, 0x9F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x7F, 0xBF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x3F, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1E, 0xFF, 0xFF, 0xFC, 0x00, 0x00
};
////////////////////////////////////////BitMap Bateria/////////////////////////////////////////////
const uint8_t bat_bitmap[] U8G_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x00, 0xFF,
    0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00,
    0x03, 0x18, 0x00, 0xCF, 0x00, 0x07, 0x98, 0x00, 0xCF, 0x00, 0x07, 0x98, 0x00, 0xC0, 0x00, 0x03,
    0x18, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00, 0x00, 0x18,
    0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00,
    0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0, 0x00, 0x00, 0x18, 0x00, 0xC0,
    0x00, 0x00, 0x18, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2C, 0x20, 0x30, 0x78, 0x30, 0x30, 0x2C, 0x20,
    0x30, 0x78
};

///////////////////////////////////////BitMap Baja/////////////////////////////////////////////////
const uint8_t logoBaja[] U8G_PROGMEM = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F,
    0xFF, 0xFF, 0xDF, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xCF, 0xF0, 0x00, 0x0F,
    0xF1, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xE7, 0xE2, 0x08, 0x8F, 0xE3, 0xFC, 0x1F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x1F, 0xE3, 0xC2, 0xB2, 0x83, 0xC7, 0xF8, 0x07, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0x0F, 0x11, 0x02, 0xBA, 0x80, 0xC8, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x04,
    0x08, 0x03, 0xA3, 0x88, 0x10, 0x30, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x1C, 0x04, 0x40, 0x00,
    0x02, 0x20, 0x38, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7E, 0x00, 0x10, 0x00, 0x00, 0x10, 0x7E,
    0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x07, 0xFF, 0xE0, 0x48, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFE, 0xFF, 0xA4, 0x00, 0x00, 0x00, 0x25, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC,
    0x7F, 0xC0, 0x00, 0x00, 0x00, 0x13, 0xFE, 0x3F, 0x3F, 0xFF, 0xFF, 0xFC, 0x78, 0x3F, 0x88, 0x00,
    0x00, 0x00, 0x01, 0xFC, 0x1E, 0x3F, 0xFF, 0xFF, 0xFC, 0x30, 0x1E, 0x10, 0xC0, 0x00, 0x00, 0x09,
    0x78, 0x0C, 0x3F, 0xFF, 0xFF, 0xFC, 0x10, 0x08, 0x03, 0xF8, 0x10, 0x00, 0x84, 0x10, 0x08, 0x1F,
    0xFF, 0xFF, 0xF8, 0x10, 0x08, 0x27, 0xFF, 0xF8, 0x00, 0xC4, 0x90, 0x08, 0x1F, 0xFF, 0xFF, 0xF0,
    0x18, 0x1C, 0x5F, 0xFF, 0xFC, 0x01, 0xA0, 0x18, 0x1C, 0x0F, 0xFF, 0xFF, 0xF0, 0x3C, 0x3E, 0x5F,
    0xFF, 0xFE, 0x01, 0x02, 0x7C, 0x3C, 0x0F, 0xFF, 0xFF, 0xF8, 0x3E, 0x7E, 0x7F, 0xFF, 0xFF, 0x01,
    0x02, 0x7E, 0x7C, 0x1F, 0xFF, 0xFF, 0xFC, 0x3F, 0xFC, 0x7F, 0x7F, 0xFF, 0x1F, 0x02, 0x3F, 0xFC,
    0x3F, 0xFF, 0xFF, 0xFE, 0x7F, 0xFC, 0xBF, 0xFF, 0xFF, 0x9F, 0x01, 0x3F, 0xFE, 0x7F, 0xFF, 0xFF,
    0xFF, 0x7F, 0x7C, 0xBF, 0xFF, 0xFF, 0xBF, 0x01, 0x3E, 0x7E, 0xFF, 0xFF, 0xFF, 0xFB, 0xFE, 0x3C,
    0xEE, 0xFF, 0xFF, 0x3F, 0xBF, 0x3C, 0x7F, 0xDF, 0xFF, 0xFF, 0xF1, 0xFE, 0x1C, 0xF3, 0xDF, 0xFF,
    0x7F, 0xFF, 0x38, 0x7F, 0xCF, 0xFF, 0xFF, 0xE1, 0xFE, 0x08, 0xFF, 0xEB, 0xF9, 0xFF, 0xBF, 0x18,
    0x41, 0x87, 0xFF, 0xFF, 0xC0, 0xEC, 0x08, 0xFF, 0xF6, 0x3F, 0x7F, 0xBF, 0x10, 0x30, 0x03, 0xFF,
    0xFF, 0x80, 0x4C, 0x0C, 0xFF, 0xF7, 0xFF, 0xFF, 0xFE, 0x00, 0x30, 0x01, 0xFF, 0xFF, 0x80, 0x44,
    0x0C, 0xFF, 0xF7, 0xFF, 0xFF, 0xF0, 0x00, 0x20, 0x01, 0xFF, 0xFF, 0xC0, 0xE2, 0x1C, 0xFF, 0xFD,
    0xFF, 0xF8, 0x11, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xE1, 0xF0, 0x1C, 0xFF, 0xFD, 0xFF, 0xC6, 0x10,
    0x00, 0x08, 0x07, 0xFF, 0xFF, 0xF3, 0xF9, 0x1E, 0x7F, 0xFF, 0x80, 0xC7, 0x10, 0x40, 0x18, 0xCF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xBE, 0x7F, 0xFE, 0x18, 0x46, 0x10, 0x60, 0x03, 0xFF, 0xFF, 0xFF, 0xE7,
    0xFF, 0xFE, 0x7E, 0x02, 0x18, 0x41, 0x08, 0x63, 0xFE, 0x07, 0xFF, 0xFF, 0x03, 0xF9, 0xFF, 0x08,
    0xE2, 0x11, 0xC3, 0x08, 0x1F, 0x90, 0xC0, 0xFF, 0xFC, 0x01, 0xF0, 0xF8, 0x18, 0xE2, 0x0C, 0x43,
    0x0C, 0xF8, 0x03, 0x80, 0x3F, 0xFE, 0x00, 0xE0, 0x61, 0x98, 0x07, 0x1C, 0x63, 0xF9, 0xC4, 0x01,
    0x00, 0x7F, 0xFF, 0x00, 0x40, 0x01, 0x88, 0x61, 0x1C, 0x7F, 0xC1, 0x84, 0x00, 0x00, 0xFF, 0xFF,
    0x81, 0x80, 0x00, 0x08, 0x61, 0x0F, 0xFE, 0x30, 0x84, 0x01, 0x81, 0xFF, 0xFF, 0x8F, 0x80, 0x71,
    0xC0, 0x71, 0xFF, 0xFC, 0x23, 0x80, 0x01, 0xE1, 0xFF, 0xFF, 0xFF, 0x80, 0xF0, 0xE0, 0x7F, 0xC0,
    0x7C, 0x00, 0x86, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC1, 0x10, 0x01, 0xFB, 0x1C, 0x7C, 0x00, 0x06,
    0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x18, 0x78, 0x61, 0x1C, 0x3F, 0x18, 0x87, 0x7F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC0, 0x3F, 0xF0, 0x31, 0x00, 0x3C, 0x08, 0xDF, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
    0xF8, 0x03, 0x01, 0x0C, 0x30, 0x03, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xE1, 0x87, 0xC0,
    0x0E, 0x03, 0xE3, 0xFF, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x21, 0x87, 0xF0, 0x00, 0x0F, 0xF3,
    0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x20, 0x04, 0x30, 0x00, 0x7F, 0xF9, 0xFC, 0x01, 0xFF,
    0xFF, 0xFF, 0xFF, 0x80, 0x61, 0x04, 0x21, 0xFF, 0xFF, 0xFC, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
    0x80, 0x10, 0x06, 0x1F, 0xFF, 0xFF, 0xFC, 0x7F, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0x86, 0x10, 0x47,
    0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x86, 0x10, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

U8GLIB_ST7920_128X64_1X u8g(6, 5, 8 ,7);     //Declaracao dos pinos do display.

void drawStart(){
    // Desenha o logo da UFU no display
    u8g.firstPage();
	do{
    	u8g.drawBitmapP( 32, 0, 8, 64, logoUFU);
	}while(u8g.nextPage());
    delay(4000);

    // Desenha o logo da Equipe no display
    u8g.firstPage();
	do{
		u8g.drawBitmapP( 11, 0, 13, 64, logoBaja);
	}while(u8g.nextPage());
	delay(4000);
}

void nenhumaBarra(){
	u8g.setFont(u8g_font_helvR08);
	u8g.setColorIndex(1);
	u8g.setPrintPos(0,63);
	u8g.print("RPM");

	/*u8g.setFont(u8g_font_helvR08);
	u8g.setColorIndex(1);
	u8g.setPrintPos(27,63);
	u8g.print(rpm);*/
}

void primeiraBarra(){
	u8g.drawLine(0, 49, 1, 49);
	u8g.drawLine(0, 48, 2, 48);
	u8g.drawLine(0, 47, 2, 47);
	u8g.drawLine(0, 46, 3, 46);
	u8g.drawLine(0, 45, 3, 45);
	u8g.drawLine(0, 44, 4, 44);
	u8g.drawLine(0, 43, 4, 43);
	u8g.drawLine(0, 42, 5, 42);
	u8g.drawLine(0, 41, 5, 41);
	u8g.drawLine(0, 40, 6, 40);
	u8g.drawLine(0, 39, 6, 39);
	u8g.drawLine(0, 38, 7, 38);
	u8g.drawLine(0, 37, 7, 37);
	u8g.drawLine(0, 36, 8, 36);
	u8g.drawLine(0, 35, 8, 35);
}

void segundaBarra(){
	u8g.drawLine(0, 32, 9, 32);
	u8g.drawLine(0, 31, 9, 31);
	u8g.drawLine(0, 30, 10, 30);
	u8g.drawLine(0, 29, 10, 29);
	u8g.drawLine(0, 28, 11, 28);
	u8g.drawLine(0, 27, 11, 27);
	u8g.drawLine(0, 26, 12, 26);
	u8g.drawLine(0, 25, 12, 25);
	u8g.drawLine(0, 24, 13, 24);
	u8g.drawLine(0, 23, 13, 23);
	u8g.drawLine(0, 22, 14, 22);
}

void terceiraBarra(){
	u8g.drawLine(0, 19, 15, 19);
	u8g.drawLine(0, 18, 15, 18);
	u8g.drawLine(0, 17, 16, 17);
	u8g.drawLine(0, 16, 16, 16);
	u8g.drawLine(0, 15, 17, 15);
	u8g.drawLine(0, 14, 17, 14);
	u8g.drawLine(0, 13, 18, 13);
	u8g.drawLine(0, 12, 18, 12);
	u8g.drawLine(0, 11, 19, 11);
	u8g.drawLine(0, 10, 20, 10);
}

void quartaBarra(){
	u8g.drawLine(0, 7, 21, 7);
	u8g.drawLine(0, 6, 21, 6);
	u8g.drawLine(0, 5, 22, 5);
	u8g.drawLine(0, 4, 22, 4);
	u8g.drawLine(0, 3, 23, 3);
	u8g.drawLine(0, 2, 23, 2);
	u8g.drawLine(0, 1, 24, 1);
	u8g.drawLine(0, 0, 25, 0);
}

void constantes(int tensao, int _velocidade, int distancia_percorrida, int temperatura1, int temperatura2){
	//Linhas responsaveis pela impressao da bateria e da tensao:
	u8g.setFont(u8g_font_6x12);
	u8g.setColorIndex(1);
	u8g.drawBitmapP( 95, 39, 5, 42, bat_bitmap);
	u8g.setPrintPos(100,56);
	if (tensao < 10)
		u8g.print("0");
	u8g.print(tensao);
	u8g.setPrintPos(113,56);
	u8g.print("v");
	//Linhas responsaveis pela impressao da velocidade:
	u8g.setFont(u8g_font_fur35n);
	u8g.setColorIndex(1);
	u8g.setPrintPos(25,36);
	if (_velocidade < 10)
		u8g.print("0");
	u8g.print(_velocidade);
	u8g.setFont(u8g_font_6x13);
	u8g.setColorIndex(1);
	u8g.setPrintPos(78,35);
	u8g.print("KM/h");
	//Linhas responsaveis pela impressao da distancia percorrida:
	u8g.setFont(u8g_font_6x12);
	u8g.setColorIndex(1);
	u8g.setPrintPos(28,44);
	u8g.print("Dist:");
	u8g.setPrintPos(57,44);
	u8g.print(distancia_percorrida);
	u8g.print("Km");
	//Linhas responsaveis pela impressao da temperatura da CVT:
	u8g.setFont(u8g_font_6x12);
	u8g.setColorIndex(1);
	u8g.setPrintPos(28,52);
	u8g.print("CVT:");
	u8g.setPrintPos(57,52);
	u8g.print(temperatura1);
	u8g.print("C");
	//Linhas responsaveis pela impressao da temperatura do motor:
	u8g.setFont(u8g_font_6x12);
	u8g.setColorIndex(1);
	u8g.setPrintPos(28,60);
	u8g.print("Motor:");
	u8g.setPrintPos(63,60);
	u8g.print(temperatura2);
	u8g.print("C");
}

void telaPrincipal(int tensao, int _velocidade, int distancia_percorrida, int temperatura1, int temperatura2,
 					int rpm){
	Serial.print("RPM: ");
	Serial.println(rpm);
 	u8g.firstPage();
 	do{
 		if(rpm == 0){
 			Serial.println("Nenhuma Barra!");
 			nenhumaBarra();
	 		constantes(tensao, _velocidade, distancia_percorrida, temperatura1, temperatura2);
		}

		else{
			if(rpm >= 1 && rpm <= 1050){
				Serial.println("Uma Barra!");
				nenhumaBarra();
				primeiraBarra();
				constantes(tensao, _velocidade, distancia_percorrida, temperatura1, temperatura2);
		}

			else{
				if(rpm >= 1051 && rpm <= 2101){
					Serial.println("Duas Barra!");
					nenhumaBarra();
					primeiraBarra();
					segundaBarra();
					constantes(tensao, _velocidade, distancia_percorrida, temperatura1, temperatura2);
				}

				else{
					if(rpm >= 2102 && rpm <= 3152){
						Serial.println("Tres Barra!");
						nenhumaBarra();
						primeiraBarra();
						segundaBarra();
						terceiraBarra();
						constantes(tensao, _velocidade, distancia_percorrida, temperatura1, temperatura2);
					}

					else{
						if(rpm >= 3153 && rpm <= 4203){
							Serial.println("Quatro Barra!");
							nenhumaBarra();
							primeiraBarra();
							segundaBarra();
							terceiraBarra();
							quartaBarra();
							constantes(tensao, _velocidade, distancia_percorrida, temperatura1, temperatura2);
						}
					}
				}
			}
		}
 	}while(u8g.nextPage());
 }

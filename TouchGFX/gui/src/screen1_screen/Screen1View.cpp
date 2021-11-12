#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::valueUpdate(uint16_t value)
{
	memset(&textArea1Buffer, 0, TEXTAREA1_SIZE);
	Unicode::snprintf(textArea1Buffer, sizeof(textArea1Buffer), "%d", value);
	textArea1.invalidate();
}

void Screen1View::BT_Clicked()
{
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_3, GPIO_PIN_SET);  // pull the pin HIGH
	HAL_Delay(100);  // wait for 1000 us
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_3, GPIO_PIN_RESET);
}

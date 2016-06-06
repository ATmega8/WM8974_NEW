#include "main.h"

int main(void)
{
	int i, target;


	WM8974_Init(I2S_AudioFreq_8k, (uint16_t*)&DMA_ReceiveBuf1, (uint16_t*)&DMA_ReceiveBuf2);


    nRF24L01_InitTypeDef nRF24L01_InitStructure;

	nRF24L01_InitStructure.nRF24L01_Mode = NRF24L01_Mode_Transmission;	
	nRF24L01_InitStructure.nRF24L01_Enable_AutoACK = NRF24L01_Enable_AutoACK_All;
	nRF24L01_InitStructure.nRF24L01_Enable_RxAddr = NRF24L01_Enable_RxAddr_All;
	nRF24L01_InitStructure.nRF24L01_RF_Channal = 0x40;
	nRF24L01_InitStructure.nRF24L01_RF_DataRate = NRF24L01_RF_DataRate_2Mbps;
	nRF24L01_InitStructure.nRF24L01_RF_OutputPower = NRF24L01_RF_OutputPower_0dBm;

	if( nRF24L01_Init(&nRF24L01_InitStructure) != NRF24L01_OK)
		goto ERROR;
	else
	{
		/*如果nRF24L01初始化正常*/
		/*启动WM8974*/

		WM8974_Start();

		/*初始化信号量*/
		//SemaphoreInit(&audioSem);

		while(1)
		{

		}
	}	



ERROR:
	while(1)
	{

	}
}
  

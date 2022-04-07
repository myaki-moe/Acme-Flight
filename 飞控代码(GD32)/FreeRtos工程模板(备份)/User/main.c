#include "stm32f10x.h"

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"



void vTaskLed1( void * pvParameters )
{
	while(1)
	{
		vTaskDelay( 5000 );
	}
	
}


int main ( void )
{	

	xTaskCreate( vTaskLed1, "Task 1", 512, NULL, 1, NULL );
	
	vTaskStartScheduler();
	

}



/*********************************************END OF FILE**********************/













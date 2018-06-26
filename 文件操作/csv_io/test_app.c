#include <stdio.h>
#include "csv_io.h"

int main(void)
{
	int ret;
	//1. д��ʾ��
	char *file_name = "test.csv";
	CsvCreateFile(file_name);

	char *info = "something you should record...";
	int para1 = 123;
	float para2 = 2.34;
	for (int i = 0; i < 10; i++)
	{
		CsvWriteRecord(file_name, para1, para2);
	}
	CsvCloseFile();

	//2. ����ʾ��
	ret = CsvReadExample(file_name);
	return 0;
}
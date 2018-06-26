/************************************************************************/
/* 模块名：FileHandle
** 作者：尹超
** 描述：该模块用以实现C环境下的文件应用级操作（搜索、查找文件名等）
** 更新时间：2018-5-29
** 已实现功能一览表：
** SearchDir->搜索特定文件夹，返回该文件夹下符合规则的文件名			*/
/************************************************************************/
#ifndef FILE_HANDLE_H
#define FILE_HANDLE_H

#define MAX_FILE_NAME_LEN 20 //容忍的最长文件名

/************************************************************************/
/* 原型：void SearchDir(const char* path, char(*file_name)[MAX_FILE_NAME_LEN], int *len)
** 版本：V1.0
** 描述：给定输入条件，返回该条件下的搜索情况，并统计搜索到的文件数量
** 输入：search_cond->查找条件（可以用通配符）
**		示例： search_cond = ".//*.txt"  查找本文件夹下所有txt格式的文档
** 输出：file_name->以列表形式输出的文件名
**		备注：file_name的第一个元素代表该文件名的长度，后面紧跟着文件名的内容
**		 len -> 搜索到的合法文件数量
** 缺陷：对搜索到的文件夹没有处理逻辑，暂时只处理文件*/
/************************************************************************/
void SearchDir(const char* search_cond, char(*file_name)[MAX_FILE_NAME_LEN], int *len);
#endif

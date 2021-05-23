#define INIT_LIST 100
#define LIST_ADD 10 
typedef int ElemType ;

typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}Sqlist;
/**
  *author:lsx;
  *create data:2018/6/8
  */
//macro define;
#define MAX_LENGTH 100
#define DATA_TYPE int
#define INIT_DATA 0;
#define TRUE 1
#define FALSE 0
#define ZERO 0

#include<studio.h>
// the data structure
typedef struct array
{
  DATA_TYPE content[MAX_LENGTH];
  int length;
} node;
  
// init the init_node;
boolean init(node init_node)
{
  init_node.length=0;
  for (int i = 0; i < MAX_LENGTH; i++)
  {
    node.content[i]=INIT_DATA;
  }
  return TRUE;
}

// push the entity into push_node
boolean push(node push_node, DATA_TYPE entity)
{
  if (MAX_LENGTH <= push_node.length)
  {
    return FALSE;
  }
  push_node.conent[push_node.length] = entity;
  return TRUE;
}

//pop the data from pop_node
DATA_TYPE pop(node pop_node)
{
  if (ZERO >= pop_node.length)
  {
    return NULL;
  }
  pop_node.length--;
  return pop_node.content[pop_node.length+1];
  
}

//change the content on the index of change_node
boolean changeContent(node change_node, int index, DATA_TYPE entity)
{
  if((index >= change_node.length) || (index < ZERO))
  {
    return FALSE;
  }
  change_node.content[index] = entity;
  return true;
}
int main()
{
  node node1;
  return 0;
}

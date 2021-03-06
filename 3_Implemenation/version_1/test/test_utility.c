#include "unity.h"
#include <main.h>

#include <main.h>
#define PROJECT_NAME    "M1_Project-Utility-"

/* Prototypes for all the test functions */
void test_Add_Record(void);
void test_List_Record(void);
void test_Modify_Record(void);
void test_Delete_Record(void);
void test_Exit(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Add_Record);
  RUN_TEST(test_Modify_Record);
  RUN_TEST(test_Exit);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

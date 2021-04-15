
PROJ_NAME = employee_management_system
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/menu.c \ 
src/build.c \
src/list.c \
src/insert.c \
src/deletes.c \
src/search.c \


src/input_year.c \
src/input_day.c \
src/input_month.c \
src/verify_leapy_year.c \
src/input_starting_weekdayofyear.c \
src/input_YEAR_INFO.c \
src/input_DAY_INFO.c \
src/input_YEAR_CALENDAR_DISPLAY.c \
src/input_MONTH_CALENDAR_DISPLAY.c \
src/choose_module.c \
src/input_select_menu.c \

# All test source files
TEST_SRC =  src/menu.c \
src/build.c \
src/list.c \
src/insert.c \
src/deletes.c \
src/search.c \
test/test.c\
unity/unity.c\


INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

clean:
	
	$(RM) *.$(EXEC)
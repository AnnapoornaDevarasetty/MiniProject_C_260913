PROJ_NAME = main
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/build.c \
src/list.c \
src/insert.c \
src/deletes.c \
src/edit.c \
src/search.c \
src/sort.c \
src/menu.c \

COV_SRC = test.c


# All test source files
TEST_SRC = test/test.c \
src/main.c \
unity/unity.c 
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
.PHONY: run clean test doc all


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,		$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c 
	$(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	
	


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)

clean:
	
	$(RM) *.$(EXEC)

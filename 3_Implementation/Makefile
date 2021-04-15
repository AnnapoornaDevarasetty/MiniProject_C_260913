#Makefile present works only in windows only

PROJ_NAME = employee_management_system

TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = ./Build



ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif 



 

test_src = test_files/test.c 

SRC = src/menu.c src/build.c src/list.c src/insert.c src/deletes.c src/search.c

main_src = main.c

UNITY = unity/unity.c 

INC =  -Iinc\
-Iunity

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc


all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
   

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))


test: $(SRC) $(test_src) $(UNITY)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))


doc:
	 make -C ./documentation

#pro: $(main_src) $(SRC) 
#	gcc $(main_src) $(SRC) -I$(INC)  -o pro.exe


#pro_run: pro.exe
#	./pro.exe


#test: $(SRC) $(test_src)
#	gcc $(SRC) $(test_src) -I$(INC) -I -c $(UNITY) -o test.exe

#run1: test.exe
#	./test.exe


coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a main.c $(SRC) $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(RM) *.gcno
	$(RM) *.gcov
	$(RM) *.gcda
 
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

valgrind:
	valgrind $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)

	
clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcno
	$(RM) *.gcov
	$(RM) *.gcda
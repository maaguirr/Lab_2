##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab_2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/maasa/Documents/ECEGR2020/ECEGR2020
ProjectPath            :=C:/Users/maasa/Documents/ECEGR2020/ECEGR2020/Lab_2
IntermediateDirectory  :=../build-$(ConfigurationName)/Lab_2
OutDir                 :=../build-$(ConfigurationName)/Lab_2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=maasa
Date                   :=04/02/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/Tools/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/Tools/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/Tools/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/Tools/mingw64/bin/ar.exe rcu
CXX      := C:/Tools/mingw64/bin/g++.exe
CC       := C:/Tools/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/Tools/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Lab_2/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Lab_2/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Lab_2" mkdir "..\build-$(ConfigurationName)\Lab_2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Lab_2" mkdir "..\build-$(ConfigurationName)\Lab_2"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Lab_2/.d:
	@if not exist "..\build-$(ConfigurationName)\Lab_2" mkdir "..\build-$(ConfigurationName)\Lab_2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Lab_2/main.c$(ObjectSuffix): main.c ../build-$(ConfigurationName)/Lab_2/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/maasa/Documents/ECEGR2020/ECEGR2020/Lab_2/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Lab_2/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Lab_2/main.c$(ObjectSuffix) -MF../build-$(ConfigurationName)/Lab_2/main.c$(DependSuffix) -MM main.c

../build-$(ConfigurationName)/Lab_2/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Lab_2/main.c$(PreprocessSuffix) main.c


-include ../build-$(ConfigurationName)/Lab_2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



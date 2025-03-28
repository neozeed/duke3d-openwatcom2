#This make file is used with Watcom C/C++ 32 Compiler v11.0c
#debug = /d2 /w1
#all = debug all
prod = /5r /s /otexan 

duke3d.exe : game.obj actors.obj gamedef.obj global.obj menues.obj player.obj &
			premap.obj sector.obj sounds.obj rts.obj  &
			config.obj animlib.obj
		wlink $(all) @makefile.lnk
		copy duke3d.exe strip3d.exe
		4gwbind 4gwpro.exe strip3d.exe d3d.exe -V
		

compileoptions = $(prod) $(debug) -imact
globaldependencies = makefile. duke3d.h global.c

game.obj : game.c $(globaldependencies)
	wcc386 game $(compileoptions)
actors.obj : actors.c $(globaldependencies)
	wcc386 actors $(compileoptions)
gamedef.obj : gamedef.c $(globaldependencies)
	wcc386 gamedef $(compileoptions)
global.obj : global.c $(globaldependencies)
	wcc386 global $(compileoptions)
menues.obj : menues.c $(globaldependencies)
	wcc386 menues $(compileoptions)
player.obj : player.c $(globaldependencies)
	wcc386 player $(compileoptions)
premap.obj : premap.c $(globaldependencies)
	wcc386 premap $(compileoptions)
sector.obj : sector.c $(globaldependencies)
	wcc386 sector $(compileoptions)
sounds.obj : sounds.c $(globaldependencies)
	wcc386 sounds /zu $(compileoptions)
rts.obj : rts.c $(globaldependencies)
	wcc386 rts $(compileoptions)
config.obj : config.c $(globaldependencies)
	wcc386 config $(compileoptions)
animlib.obj : animlib.c $(globaldependencies)
	wcc386 animlib $(compileoptions)


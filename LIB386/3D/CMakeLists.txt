# General sources
set(SOURCES_FILES CAMERA.CPP DATAMAT.CPP DISTANCE.CPP IMATSTD.CPP LIGHT.CPP LIROT3D.CPP LPROJ.CPP LROT3D.CPP MOVE.CPP
        ROT3D.CPP)

set(SOURCES_FILES_ASM COPYMATF.ASM GETANG2D.ASM GETANG3D.ASM IMATSTDF.ASM IMATTRAF.ASM LIROT3DF.ASM LITLISTF.ASM
        LPROJ3DF.ASM LPROJISO.ASM LROT2DF.ASM LROT3DF.ASM MULMATF.ASM PRLI3DF.ASM PRLIISO.ASM PROJ.ASM REGLE3.ASM
        ROTMATU.ASM ROTRALIF.ASM ROTVECT.ASM SINTAB.ASM SINTABF.ASM SQRROOT.ASM TANTAB.ASM)

add_library(3D ${SOURCES_FILES} ${SOURCES_FILES_ASM})

# Configure all ASM files to be recognized as such (workaround for bug where .ASM uppercase extension is not recognized)
foreach (FILE_ASM IN LISTS SOURCES_FILES_ASM)
    set_source_files_properties(${FILE_ASM} PROPERTIES LANGUAGE ASM_MASM)
endforeach ()

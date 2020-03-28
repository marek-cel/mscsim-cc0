HEADERS += \
    $$PWD/efis_Colors.h \
    $$PWD/efis_Fonts.h \
    $$PWD/efis_Log.h \
    $$PWD/efis_Data.h \
    $$PWD/efis_Defines.h \
    $$PWD/efis_Models.h \
    $$PWD/efis_Module.h \
    $$PWD/efis_Path.h \
    $$PWD/efis_Singleton.h

SOURCES += \
    $$PWD/efis_Colors.cpp \
    $$PWD/efis_Fonts.cpp \
    $$PWD/efis_Log.cpp \
    $$PWD/efis_Models.cpp \
    $$PWD/efis_Module.cpp

################################################################################

HEADERS += \
    $$PWD/gdu/efis_ADI.h \
    $$PWD/gdu/efis_ALT.h \
    $$PWD/gdu/efis_ASI.h \
    $$PWD/gdu/efis_GDU.h \
    $$PWD/gdu/efis_HSI.h \
    $$PWD/gdu/efis_PFD.h \
    $$PWD/gdu/efis_VSI.h

SOURCES += \
    $$PWD/gdu/efis_ADI.cpp \
    $$PWD/gdu/efis_ALT.cpp \
    $$PWD/gdu/efis_ASI.cpp \
    $$PWD/gdu/efis_GDU.cpp \
    $$PWD/gdu/efis_HSI.cpp \
    $$PWD/gdu/efis_PFD.cpp \
    $$PWD/gdu/efis_VSI.cpp

################################################################################

HEADERS += \
    $$PWD/utils/efis_Misc.h \
    $$PWD/utils/efis_String.h \
    $$PWD/utils/efis_Units.h

SOURCES += \
    $$PWD/utils/efis_String.cpp \
    $$PWD/utils/efis_Units.cpp

################################################################################

HEADERS += \
    $$PWD/xml/efis_XmlDoc.h \
    $$PWD/xml/efis_XmlNode.h \
    $$PWD/xml/efis_XmlUtils.h

SOURCES += \
    $$PWD/xml/efis_XmlDoc.cpp \
    $$PWD/xml/efis_XmlNode.cpp \
    $$PWD/xml/efis_XmlUtils.cpp

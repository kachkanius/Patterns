TEMPLATE=subdirs

SUBDIRS = \
            AbstractFactory \   # sub-project names
            FactoryMethod \
            Singleton \
            Strategy \
            Tests
   
 # what subproject depends on others
 #  UI.depends = Engine
 #  Tests.depends = Engine

# build the project sequentially as listed in SUBDIRS !
CONFIG += ordered

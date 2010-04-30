# -------------------------------------------------
# Project created by QtCreator 2010-04-23T13:05:52
# -------------------------------------------------
TARGET = Sapien
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    graph.cpp \
    os/posix/Thread.cpp \
    os/posix/SleepTimer.cpp \
    os/posix/Mutex.cpp \
    os/posix/CountingSemaphore.cpp \
    os/posix/BinarySemaphore.cpp \
    rpy/Waveform.cpp \
    rpy/Subject.cpp \
    rpy/Simulator.cpp \
    rpy/ScenarioConfig.cpp \
    rpy/Scenario.cpp \
    rpy/RecordWfdb.cpp \
    rpy/RecordSimulate.cpp \
    rpy/RecordProxy.cpp \
    rpy/RecordIterator.cpp \
    rpy/RecordFile.cpp \
    rpy/Record.cpp \
    rpy/PulseUpdater.cpp \
    rpy/PulseCalculate.cpp \
    rpy/Pulse.cpp \
    rpy/PatientModel.cpp \
    rpy/Parameter.cpp \
    rpy/Observer.cpp \
    rpy/NormalGenerator.cpp \
    rpy/Medicine.cpp \
    rpy/LCDScreen.cpp \
    rpy/InfusionGenerator.cpp \
    rpy/InfECGCalculate.cpp \
    rpy/Generator.cpp \
    rpy/Filter.cpp \
    rpy/ExtOutDigital.cpp \
    rpy/ExtOutAnalogue.cpp \
    rpy/ExtInputs.cpp \
    rpy/Execute.cpp \
    rpy/EDRCalculate.cpp \
    rpy/ECGCalculate.cpp \
    rpy/Control.cpp \
    rpy/Continuous.cpp \
    rpy/Controller.cpp \
    rpy/Application.cpp \
    rpy/Signal.cpp \
    rpy/Application.cpp \
    hw/Dac.cpp
HEADERS += mainwindow.h \
    graph.h \
    os/posix/Thread.h \
    os/posix/SleepTimer.h \
    os/posix/Mutex.h \
    os/posix/Mailbox.h \
    os/posix/CountingSemaphore.h \
    os/posix/BinarySemaphore.h \
    rpy/Subject.h \
    rpy/SmartPtr.h \
    rpy/Simulator.h \
    rpy/ScenarioConfig.h \
    rpy/Scenario.h \
    rpy/RecordSimulate.h \
    rpy/RecordProxy.h \
    rpy/PulseCalculate.h \
    rpy/Pulse.h \
    rpy/Parameter.h \
    rpy/Observer.h \
    rpy/LCDScreen.h \
    rpy/InfusionGenerator.h \
    rpy/InfECGCalculate.h \
    rpy/Filter.h \
    rpy/ExtInputs.h \
    rpy/Execute.h \
    rpy/EDRCalculate.h \
    rpy/ECGCalculate.h \
    rpy/Control.h \
    rpy/PatientModel.h \
    rpy/Waveform.h \
    rpy/Signal.h \
    rpy/Medicine.h \
    rpy/Continuous.h \
    oxf/oxf.h \
    rpy/Controller.h \
    rpy/Application.h \
    rpy/RecordWfdb.h \
    rpy/RecordFile.h \
    rpy/Signal.h \
    hw/Dac.h
FORMS += mainwindow.ui \
    graph.ui

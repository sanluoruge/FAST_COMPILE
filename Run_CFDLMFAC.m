% make sure the FASTv8\bin directory is in the MATLAB path
%    (relative path names are not recommended in addpath()):
% cd ..\..\
% FASTv8_root_directory = pwd;
% cd Simulink\Samples
% addpath([ FASTv8_root_directory '\bin']);


% Simple Induction Generator Example ======================================
% To model a simple induction generator in Simulink use model Test01_SIG.mdl.  
% The following parameters duplicate those used in Certification Test #01.  

% Change Test01.fst as follows:
% set VSContrl = 4 in ..\..\CertTest\AWT27\Test01_ServoDyn.dat
% clear  %�����Ҫ�õ�workspace�е����ݣ���ر���

% GenEff   =  100.0;          % - Generator efficiency [ignored by the Thevenin and user-defined generator models] (%)�����Ч��
% GBRatio  =   22.5;          % - Gearbox ratio (-)���������
% SIG_SlPc =    1.5125;       % - Rated generator slip percentage [>0] (%)              Now HSS side!������ת���� 
% SIG_SySp = 1200.0;          % - Synchronous (zero-torque) generator speed [>0] (rpm)  Now HSS side!ͬ��(��Ť��)�����ת��
% SIG_RtTq = 1367.9;          % - Rated torque [>0] (N-m)                               Now HSS side!�ת��
% SIG_PORt =    2.0;          % - Pull-out ratio (Tpullout/Trated) [>1] (-)% ��������
% SIG_SySp = SIG_SySp*pi/30;  % convert to rad/s
% SIG_RtSp = SIG_SySp*(1.0+0.01*SIG_SlPc);
% SIG_POS1=SIG_PORt*(SIG_RtSp-SIG_SySp);
% SIG_POTq=SIG_RtTq*SIG_PORt;
% SIG_Slop=SIG_RtTq/(SIG_RtSp - SIG_SySp);

%PI ��ز�����
PC_KI         =       0.004068634;  %Integral gain for pitch controller at rated pitch (zero), (-).0.008068634;
PC_KK         =       0.1099965;    %Pitch angle where the the derivative of the aerodynamic power w.r.t. pitch has increased by a factor of two relative to the derivative at rated pitch (zero), rad.
PC_KP         =       0.01882681;   %Proportional gain for pitch controller at rated pitch (zero), sec.
PC_MaxPit     =       1.570796;     %Maximum pitch setting in pitch controller, rad.
R2D           =       57.295780;    %Factor to convert radians to degrees.
PC_RefSpd     =       122.9096;     %Desired (reference) HSS speed for pitch controller, rad/s.
CornerFreq    =       1.570796;     %Corner frequency (-3dB point) in the recursive, single-pole, low-pass filter, rad/s. -- chosen to be 1/4 the blade edgewise natural frequency ( 1/4 of approx. 1Hz = 0.25Hz = 1.570796rad/s)

% wind.data=circshift(wind.data,-230);%�˲�����ٵĲ������������s=�˲�ǰ����ӳ�ʱ��/����������0.00625�����ӳ�ʱ�����˲�����ֹƵ�ʾ�����
% parameters required for the S-Function block:
FAST_InputFileName = 'G:\A2_Doctor\1 FASTv8\Simulink\Samples\CFDL_MFAC_weifen_real_time\CertTest\Test18.fst';%��������Ҫ�þ��Ե�ַ
TMax =100;
initalAgl=0; %��ʼ�����rad���˴�15m/s��ԼΪ0.19
% run the model
sim('CFDLMFAC.slx',[0,TMax]);
%sim('Test18_SIG.slx',[0,TMax]);

% look at results:
% PlotFASToutput({'../../CertTest/Test01.SFunc.out','../../CertTest/Test01.out'},{'SFunc','exe'});
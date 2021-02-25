function bio=CFDLMFACbio
bio = [];
bio(1).blkName='Clock';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&CFDLMFAC_B.Clock';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Generator speed';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&CFDLMFAC_B.Generatorspeed';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Pitch';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&CFDLMFAC_B.Pitch';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='power';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&CFDLMFAC_B.power';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='wind speed';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&CFDLMFAC_B.windspeed';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='FAST Nonlinear Wind Turbine/S-Function';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[39,1];
bio(6).sigWidth=39;
bio(6).sigAddress='&CFDLMFAC_B.SFunction[0]';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

function len = getlenBIO
len = 6;


function xcp = CFDLMFACxcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'CFDLMFAC';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.00625;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'CFDLMFAC_B.Clock';
    
xcp.signals(2).symbol =  'CFDLMFAC_B.Generatorspeed';
    
xcp.signals(3).symbol =  'CFDLMFAC_B.Pitch';
    
xcp.signals(4).symbol =  'CFDLMFAC_B.power';
    
xcp.signals(5).symbol =  'CFDLMFAC_B.windspeed';
    
xcp.signals(6).symbol =  'CFDLMFAC_B.SFunction';

function n = getNumParameters
n = 0;

function n = getNumSignals
n = 6;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;


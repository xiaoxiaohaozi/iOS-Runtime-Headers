/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class <NSURLConnectionDelegate>, NSData, NSString;

@interface YahooDoppelganger : NSObject {
    <NSURLConnectionDelegate> *_delegate;
    NSString *_expectedRequestPattern;
    NSData *_response;
    unsigned long long _responseChunkDelay;
    unsigned long long _responseChunkInitialDelay;
    unsigned long long _responseChunkSize;
    unsigned long long _responseOffset;
    bool_cancelled;
}

@property <NSURLConnectionDelegate> * delegate;
@property(retain) NSString * expectedRequestPattern;
@property(retain) NSData * response;
@property unsigned long long responseChunkDelay;
@property unsigned long long responseChunkInitialDelay;
@property unsigned long long responseChunkSize;

+ (void)_doppelgangerFinished:(id)arg1;
+ (void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2;
+ (bool)canHandleRequest:(id)arg1;
+ (void)clearDoppelgangerData;
+ (void)hookIntoYQLRequestIfNeeded;
+ (id)newDoppelgangerMatchingRequestPattern:(id)arg1;
+ (id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(long long)arg2;
+ (id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(long long)arg2;
+ (id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(bool)arg2;
+ (id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2;
+ (void)setTestHarness:(id)arg1;
+ (void)spewDoppelgangerData;
+ (bool)waitForAllDoppelgangersUpToTimeout:(double)arg1;

- (void).cxx_destruct;
- (void)_relayDataChunk;
- (void)cancel;
- (id)delegate;
- (id)description;
- (id)expectedRequestPattern;
- (id)init;
- (bool)matchesRequest:(id)arg1;
- (id)response;
- (unsigned long long)responseChunkDelay;
- (unsigned long long)responseChunkInitialDelay;
- (unsigned long long)responseChunkSize;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExpectedRequestPattern:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseChunkDelay:(unsigned long long)arg1;
- (void)setResponseChunkInitialDelay:(unsigned long long)arg1;
- (void)setResponseChunkSize:(unsigned long long)arg1;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;

@end
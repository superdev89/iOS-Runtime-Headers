/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray;

@interface HKSampleQuery : HKQuery {
    unsigned long long _limit;
    id _resultHandler;
    NSMutableArray *_results;
    NSArray *_sortDescriptors;
}

@property(readonly) unsigned long long limit;
@property(readonly) id resultHandler;
@property(copy,readonly) NSArray * sortDescriptors;

+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_queue_validate;
- (void)deliverResultsBatch:(id)arg1 final:(bool)arg2 error:(id)arg3 forQueryUUID:(id)arg4 confirmationBlock:(id)arg5;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id)arg5;
- (unsigned long long)limit;
- (id)resultHandler;
- (id)sortDescriptors;

@end
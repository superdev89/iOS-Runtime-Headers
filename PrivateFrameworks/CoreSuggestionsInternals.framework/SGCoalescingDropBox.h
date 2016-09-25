/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCoalescingDropBox : NSObject {
    id  _box;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _boxLock;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    }  _cond;
    id /* block */  _handler;
    id /* block */  _makeEmptyBox;
    int  _outstanding;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithBoxMaker:(id /* block */)arg1 handler:(id /* block */)arg2 qos:(unsigned int)arg3;
- (void)updateBox:(id /* block */)arg1;
- (void)updateBox:(id /* block */)arg1 delay:(double)arg2;
- (void)wait;

@end
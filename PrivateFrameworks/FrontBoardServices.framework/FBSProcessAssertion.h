/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {
    unsigned int  _activationCount;
    BKSProcessAssertion * _assertion;
    BOOL  _invalidated;
    NSString * _name;
    FBSProcessExecutionPolicy * _policy;
    <FBSProcess> * _process;
}

@property (getter=isActivated, nonatomic, readonly) BOOL activated;
@property (nonatomic, readonly) unsigned int activationCount;
@property (nonatomic, readonly, retain) BKSProcessAssertion *assertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isInvalidated, nonatomic, readonly) BOOL invalidated;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, retain) FBSProcessExecutionPolicy *policy;
@property (nonatomic, readonly) <FBSProcess> *process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAssertion:(id)arg1;
- (void)activate;
- (unsigned int)activationCount;
- (id)assertion;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;
- (void)invalidate;
- (BOOL)isActivated;
- (BOOL)isInvalidated;
- (id)name;
- (id)policy;
- (id)process;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

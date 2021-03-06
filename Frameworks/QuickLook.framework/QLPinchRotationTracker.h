/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPinchRotationTracker : NSObject <QLDismissGestureTracking> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _anchorLocationOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _anchorPoint;
    float  _dismissalProgress;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _initialBounds;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialGestureLocation;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialTrackingCenter;
    struct CGPoint { 
        float x; 
        float y; 
    }  _location;
    float  _minimumZoomForDismissal;
    float  _previousScale;
    float  _rotation;
    BOOL  _shouldFinishDismissal;
    float  _targetZoom;
    struct CGPoint { 
        float x; 
        float y; 
    }  _trackedCenter;
    float  _trackedScale;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _trackedTransform;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float dismissalProgress;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) float finalAnimationSpringDamping;
@property (readonly) unsigned int hash;
@property (nonatomic) float minimumZoomForDismissal;
@property (nonatomic, readonly) BOOL shouldFinishDismissal;
@property (readonly) Class superclass;
@property (nonatomic) float targetZoom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } trackedBounds;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } trackedCenter;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } trackedTransform;
@property (nonatomic, readonly) struct _QLDismissGestureTrackingVelocity { float x1; float x2; float x3; float x4; } trackedVelocity;

- (struct CGPoint { float x1; float x2; })anchorPoint;
- (float)dismissalProgress;
- (double)finalAnimationDuration;
- (float)finalAnimationSpringDamping;
- (id)init;
- (float)minimumZoomForDismissal;
- (void)setMinimumZoomForDismissal:(float)arg1;
- (void)setTargetZoom:(float)arg1;
- (BOOL)shouldFinishDismissal;
- (void)startTrackingCenter:(struct CGPoint { float x1; float x2; })arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 withInitialGestureLocation:(struct CGPoint { float x1; float x2; })arg4;
- (float)targetZoom;
- (void)trackGestureLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)trackRotation:(float)arg1;
- (void)trackScale:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { float x1; float x2; })trackedCenter;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })trackedTransform;
- (struct _QLDismissGestureTrackingVelocity { float x1; float x2; float x3; float x4; })trackedVelocity;
- (void)update;

@end

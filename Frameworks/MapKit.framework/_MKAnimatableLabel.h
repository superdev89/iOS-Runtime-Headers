/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKAnimatableLabel : UILabel {
    UILabel *_label;
}

+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })animationTransformForString:(id)arg1 fromFont:(id)arg2 toFont:(id)arg3;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })animationTransformForString:(id)arg1 fromFont:(id)arg2 toFont:(id)arg3 percentage:(float)arg4;

- (void).cxx_destruct;
- (void)_localeDidChange;
- (id)attributedText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAttributedText:(id)arg1;
- (void)setLabelTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

@end
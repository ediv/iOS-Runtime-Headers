/* Generated by RuntimeBrowser.
 */

@protocol SKUIPerspectiveView <NSObject>

@required

+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;

- (void)setPerspectiveTargetView:(UIView *)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end

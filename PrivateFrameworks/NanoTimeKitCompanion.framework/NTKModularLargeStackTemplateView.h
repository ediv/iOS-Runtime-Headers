/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> * _body1Glyph;
    NTKColoringLabel * _body1Label;
    NTKColoringLabel * _body2Label;
    UIView<NTKComplicationImageView> * _headerGlyph;
    NTKColoringLabel * _headerLeadingLabel;
    NTKColoringLabel * _headerTrailingLabel;
    BOOL  _shouldTruncateHeaderLeadingLabelFirst;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_update;
- (void)_updateForStandardBodyTemplate:(id)arg1;
- (void)_updateForTallBodyTemplate:(id)arg1;
- (void)_updateLabelsMaxWidths;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end

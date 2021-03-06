/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListTemplateView : UIView {
    BOOL  _backdropEnabled;
    UIVisualEffectView * _backdropView;
    UIView * _bannerView;
    UIView * _bgImageView;
    float  _bgVisualEffectOffset;
    UIVisualEffectView * _bgVisualEffectView;
    BOOL  _floatingBanner;
    UIView * _listView;
    UIFocusContainerGuide * _previewFocusGuide;
    UIView * _previewView;
}

@property (getter=isBackdropEnabled, nonatomic) BOOL backdropEnabled;
@property (nonatomic, retain) UIView *bannerView;
@property (nonatomic, retain) UIView *bgImageView;
@property (nonatomic) BOOL floatingBanner;
@property (nonatomic, retain) UIView *listView;
@property (nonatomic, retain) UIView *previewView;

- (void).cxx_destruct;
- (void)adjustScrollForListView:(id)arg1;
- (id)bannerView;
- (id)bgImageView;
- (BOOL)floatingBanner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBackdropEnabled;
- (void)layoutSubviews;
- (id)listView;
- (id)preferredFocusEnvironments;
- (id)previewView;
- (void)setBackdropEnabled:(BOOL)arg1;
- (void)setBannerView:(id)arg1;
- (void)setBgImageView:(id)arg1;
- (void)setFloatingBanner:(BOOL)arg1;
- (void)setListView:(id)arg1;
- (void)setOverlayBlurOffset:(float)arg1;
- (void)setPreviewView:(id)arg1;

@end

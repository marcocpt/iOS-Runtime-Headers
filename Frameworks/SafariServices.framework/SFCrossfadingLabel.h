/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFCrossfadingLabel : UILabel {
    double  _fromBrightness;
    UIColor * _fromColor;
    double  _fromHue;
    double  _fromSaturation;
    int  _mode;
    double  _progress;
}

@property (nonatomic, retain) UIColor *fromColor;
@property (nonatomic) int mode;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_updateCrossfade;
- (id)fromColor;
- (int)mode;
- (float)progress;
- (void)setFromColor:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setProgress:(float)arg1;

@end
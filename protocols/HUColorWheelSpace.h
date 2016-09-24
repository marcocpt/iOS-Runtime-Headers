/* Generated by RuntimeBrowser.
 */

@protocol HUColorWheelSpace <NSObject>

@required

- (struct { double x1; double x2; double x3; double x4; })colorForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinateForColor:(struct { double x1; double x2; double x3; double x4; })arg1 isValid:(out BOOL*)arg2;
- (unsigned int)type;

@optional

- (unsigned int)mirroringBiasAxis;
- (void)setMirroringBiasAxis:(unsigned int)arg1;

@end
//
//  ScheduleViewController.h
//  DenverRail
//
// 2008 - 2013 Tack Mobile.
//

#import <UIKit/UIKit.h>
#import "LocationManager.h"
#import <AVFoundation/AVFoundation.h>

FOUNDATION_EXPORT NSString *const MountainTimeZone;

@interface ScheduleViewController : UIViewController

@property BOOL isNorthAuto;
@property BOOL isNorthManual;
@property BOOL isAutoMode;
@property BOOL firstLoc;
@property (weak) LocationManager *sharedLocationManager; //singleton
@property (strong) NSArray *currentStops;
@property (strong) Station *currentManualStation;
@property (strong) NSDate *currentManualDate;

@property (strong) AVAudioPlayer *audioPlayer;

- (void)updateCellsAutoMode;
- (void)updateCellsManualMode;
- (void)updateCellsWithDirection:(BOOL)_isNorth;
- (void)playFlipsSound;


@end

//
//  FirstViewController.h
//  FormantPlotter
//
//  Created by William Entriken on 1/15/14.
//  Copyright (c) 2014 William Entriken. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AudioDeviceManager.h"
#import "PlotView.h"

@interface FirstViewController : UIViewController

// Top row
@property (nonatomic) IBOutlet UIImageView *indicatorImageView;
@property (nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UIButton *inputSelector;

// Second row
@property (nonatomic) IBOutlet UILabel *sliderLabel;
@property (nonatomic) IBOutlet UISlider *thresholdSlider;

// Third row
@property (nonatomic) IBOutlet UISegmentedControl *graphingMode;

// Fourth row
@property (nonatomic) IBOutlet PlotView *plotView;

// Fifth row
@property (nonatomic) IBOutlet UILabel *firstFormantLabel;
@property (nonatomic) IBOutlet UILabel *secondFormantLabel;
@property (nonatomic) IBOutlet UILabel *thirdFormantLabel;
@property (nonatomic) IBOutlet UILabel *fourthFormantLabel;

- (IBAction)processThresholdSlider;
- (IBAction)graphingModeChanged:(UISegmentedControl *)sender;
- (IBAction)showInputSelectSheet:(id)sender;
- (IBAction)showHelp;

@end
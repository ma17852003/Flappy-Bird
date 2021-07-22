//
//  GameViewController.h
//  Flappy Bird
//
//  Created by James Wu on 2014/4/22.
//  Copyright (c) 2014年 James Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

int BirdFlight;
int RandomTopTunnelPosition;
int RandomBottomTunnelPosition;
int ScoreNumber;
NSInteger HighScoreNumber;

@interface GameViewController : UIViewController
{
    IBOutlet UIImageView *Bird;
    IBOutlet UIButton *StartGame;
    IBOutlet UIImageView *TunnelTop;
    IBOutlet UIImageView *TunnelBottom;
    IBOutlet UIImageView *Top;
    IBOutlet UIImageView *Bottom;
    IBOutlet UIButton *Exit;
    IBOutlet UILabel *Scorelabel;
    
    NSTimer *TunnelMovement;
    NSTimer *BirdMovement;
}

-(IBAction)StartGame:(id)sender;
-(void)BirdMoving;
-(void)TunnelMoving;
-(void)Score;
-(void)GameOver;
-(void)PlaceTunnels;

@end

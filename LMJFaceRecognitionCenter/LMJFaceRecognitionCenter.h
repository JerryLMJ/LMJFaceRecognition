//
//  LMJFaceRecognitionCenter.h
//  LMJFaceRecognition
//
//  Created by Major on 15-2-4.
//  Copyright © 2015年 iOS开发者公会. All rights reserved.
//
//  iOS开发者公会-技术1群 QQ群号：87440292
//  iOS开发者公会-技术2群 QQ群号：232702419
//  iOS开发者公会-议事区  QQ群号：413102158
//

#import <UIKit/UIKit.h>

@interface LMJFaceRecognitionCenter : NSObject

/**
 *  通过人脸识别提取有效人脸图片
 *
 *  @param image 待识别图片
 *
 *  @return 有效人脸图片集合
 */
+(NSArray *)faceImagesByFaceRecognitionWithImage:(UIImage *)image;


/**
 *  通过人脸识别得出有效人脸数
 *
 *  @param image 待识别图片
 *
 *  @return 有效人脸个数
 */
+(NSInteger)totalNumberOfFacesByFaceRecognitionWithImage:(UIImage *)image;

@end

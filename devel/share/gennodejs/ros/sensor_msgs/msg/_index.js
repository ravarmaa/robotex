
"use strict";

let RegionOfInterest = require('./RegionOfInterest.js');
let MultiDOFJointState = require('./MultiDOFJointState.js');
let LaserScan = require('./LaserScan.js');
let JoyFeedbackArray = require('./JoyFeedbackArray.js');
let Imu = require('./Imu.js');
let PointCloud = require('./PointCloud.js');
let Image = require('./Image.js');
let PointCloud2 = require('./PointCloud2.js');
let LaserEcho = require('./LaserEcho.js');
let FluidPressure = require('./FluidPressure.js');
let ChannelFloat32 = require('./ChannelFloat32.js');
let CameraInfo = require('./CameraInfo.js');
let JointState = require('./JointState.js');
let Joy = require('./Joy.js');
let RelativeHumidity = require('./RelativeHumidity.js');
let Temperature = require('./Temperature.js');
let TimeReference = require('./TimeReference.js');
let Illuminance = require('./Illuminance.js');
let MultiEchoLaserScan = require('./MultiEchoLaserScan.js');
let MagneticField = require('./MagneticField.js');
let Range = require('./Range.js');
let PointField = require('./PointField.js');
let NavSatStatus = require('./NavSatStatus.js');
let JoyFeedback = require('./JoyFeedback.js');
let BatteryState = require('./BatteryState.js');
let NavSatFix = require('./NavSatFix.js');
let CompressedImage = require('./CompressedImage.js');

module.exports = {
  RegionOfInterest: RegionOfInterest,
  MultiDOFJointState: MultiDOFJointState,
  LaserScan: LaserScan,
  JoyFeedbackArray: JoyFeedbackArray,
  Imu: Imu,
  PointCloud: PointCloud,
  Image: Image,
  PointCloud2: PointCloud2,
  LaserEcho: LaserEcho,
  FluidPressure: FluidPressure,
  ChannelFloat32: ChannelFloat32,
  CameraInfo: CameraInfo,
  JointState: JointState,
  Joy: Joy,
  RelativeHumidity: RelativeHumidity,
  Temperature: Temperature,
  TimeReference: TimeReference,
  Illuminance: Illuminance,
  MultiEchoLaserScan: MultiEchoLaserScan,
  MagneticField: MagneticField,
  Range: Range,
  PointField: PointField,
  NavSatStatus: NavSatStatus,
  JoyFeedback: JoyFeedback,
  BatteryState: BatteryState,
  NavSatFix: NavSatFix,
  CompressedImage: CompressedImage,
};

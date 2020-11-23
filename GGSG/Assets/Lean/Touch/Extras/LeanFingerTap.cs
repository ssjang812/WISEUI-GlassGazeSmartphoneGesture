using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;
using Lean.Common;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Lean.Touch
{
	/// <summary>This component calls the OnFingerTap event when a finger taps the screen.</summary>
	[HelpURL(LeanTouch.HelpUrlPrefix + "LeanFingerTap")]
	[AddComponentMenu(LeanTouch.ComponentPathPrefix + "Finger Tap")]
	public class LeanFingerTap : MonoBehaviour
	{
		[System.Serializable] public class LeanFingerEvent : UnityEvent<LeanFinger> {}
		[System.Serializable] public class Vector3Event : UnityEvent<Vector3> {}
		[System.Serializable] public class IntEvent : UnityEvent<int> {}

		/// <summary>Ignore fingers with StartedOverGui?</summary>
		public bool IgnoreStartedOverGui = true;

		/// <summary>Ignore fingers with OverGui?</summary>
		public bool IgnoreIsOverGui;

		/// <summary>Do nothing if this LeanSelectable isn't selected?</summary>
		public LeanSelectable RequiredSelectable;

		/// <summary>How many times must this finger tap before OnTap gets called?
		/// 0 = Every time (keep in mind OnTap will only be called once if you use this).</summary>
		public int RequiredTapCount = 0;

		/// <summary>How many times repeating must this finger tap before OnTap gets called?
		/// 0 = Every time (e.g. a setting of 2 means OnTap will get called when you tap 2 times, 4 times, 6, 8, 10, etc).</summary>
		public int RequiredTapInterval;

		/// <summary>Called on the first frame the conditions are met.
		/// LeanFinger = The finger that triggered the event.</summary>
		public LeanFingerEvent OnFinger { get { if (onFinger == null) onFinger = new LeanFingerEvent(); return onFinger; } } [FormerlySerializedAs("onTap")] [FormerlySerializedAs("OnTap")] [SerializeField] private LeanFingerEvent onFinger;
		public LeanFingerEvent OnOneFinger { get { if (onOneFinger == null) onOneFinger = new LeanFingerEvent(); return onOneFinger; } }
		[FormerlySerializedAs("onOneFingerTap")] [FormerlySerializedAs("OnOneTap")] [SerializeField] private LeanFingerEvent onOneFinger;
		// custome code
		public LeanFingerEvent OnTwoFinger { get { if (onTwoFinger == null) onTwoFinger = new LeanFingerEvent(); return onTwoFinger; } }
		[FormerlySerializedAs("onTwoFingerTap")] [FormerlySerializedAs("OnTwoTap")] [SerializeField] private LeanFingerEvent onTwoFinger;
		// custome code


		/// <summary>Called on the first frame the conditions are met.
		/// Int = The finger tap count.</summary>
		public IntEvent OnCount { get { if (onCount == null) onCount = new IntEvent(); return onCount; } } [SerializeField] private IntEvent onCount;
		public IntEvent OnOneFingerCount { get { if (onOneFingerCount == null) onOneFingerCount = new IntEvent(); return onOneFingerCount; } }
		[SerializeField] private IntEvent onOneFingerCount; // custome code
		public IntEvent OnTwoFingerCount { get { if (onTwoFingerCount == null) onTwoFingerCount = new IntEvent(); return onTwoFingerCount; } }
		[SerializeField] private IntEvent onTwoFingerCount; // custome code


		/// <summary>The method used to find world coordinates from a finger. See LeanScreenDepth documentation for more information.</summary>
		public LeanScreenDepth ScreenDepth = new LeanScreenDepth(LeanScreenDepth.ConversionType.DepthIntercept);

		/// <summary>Called on the first frame the conditions are met.
		/// Vector3 = Start point based on the ScreenDepth settings.</summary>
		public Vector3Event OnWorld { get { if (onWorld == null) onWorld = new Vector3Event(); return onWorld; } } [FormerlySerializedAs("onPosition")] [SerializeField] private Vector3Event onWorld;
#if UNITY_EDITOR
		protected virtual void Reset()
		{
			RequiredSelectable = GetComponentInParent<LeanSelectable>();
		}
#endif
		protected virtual void Start()
		{
			if (RequiredSelectable == null)
			{
				RequiredSelectable = GetComponentInParent<LeanSelectable>();
			}
		}

		protected virtual void OnEnable()
		{
			LeanTouch.OnFingerTap += HandleFingerTap;
			LeanTouch.OnOneFingerTap += HandleOneFingerTap; // custome code
			LeanTouch.OnTwoFingerTap += HandleTwoFingerTap; // custome code
		}

		protected virtual void OnDisable()
		{
			LeanTouch.OnFingerTap -= HandleFingerTap;
			LeanTouch.OnOneFingerTap -= HandleOneFingerTap; // custome code
			LeanTouch.OnTwoFingerTap -= HandleTwoFingerTap; // custome code
		}

		private void HandleFingerTap(LeanFinger finger)
		{
			// Ignore?
			if (IgnoreStartedOverGui == true && finger.StartedOverGui == true)
			{
				return;
			}

			if (IgnoreIsOverGui == true && finger.IsOverGui == true)
			{
				return;
			}

			if (RequiredTapCount > 0 && finger.TapCount != RequiredTapCount)
			{
				return;
			}

			if (RequiredTapInterval > 0 && (finger.TapCount % RequiredTapInterval) != 0)
			{
				return;
			}

			if (RequiredSelectable != null && RequiredSelectable.IsSelected == false)
			{
				return;
			}

			if (onFinger != null)
			{
				onFinger.Invoke(finger);
			}

			if (onCount != null)
			{
				onCount.Invoke(finger.TapCount);
			}

			if (onWorld != null)
			{
				var position = ScreenDepth.Convert(finger.StartScreenPosition, gameObject);

				onWorld.Invoke(position);
			}
		}

		private void HandleOneFingerTap(LeanFinger finger) // custome code : two finger tap
		{
			// Ignore?
			if (IgnoreStartedOverGui == true && finger.StartedOverGui == true)
			{
				return;
			}

			if (IgnoreIsOverGui == true && finger.IsOverGui == true)
			{
				return;
			}

			if (RequiredTapCount > 0 && finger.TapCount != RequiredTapCount)
			{
				return;
			}

			if (RequiredTapInterval > 0 && (finger.TapCount % RequiredTapInterval) != 0)
			{
				return;
			}

			if (RequiredSelectable != null && RequiredSelectable.IsSelected == false)
			{
				return;
			}

			if (onOneFinger != null)
			{
				onOneFinger.Invoke(finger);
			}

			if (onOneFinger != null)
			{
				onOneFingerCount.Invoke(finger.TapCount);
			}
		}

		private void HandleTwoFingerTap(LeanFinger finger) // custome code : two finger tap
		{
			// Ignore?
			if (IgnoreStartedOverGui == true && finger.StartedOverGui == true)
			{
				return;
			}

			if (IgnoreIsOverGui == true && finger.IsOverGui == true)
			{
				return;
			}

			if (RequiredTapCount > 0 && finger.TapCount != RequiredTapCount)
			{
				return;
			}

			if (RequiredTapInterval > 0 && (finger.TapCount % RequiredTapInterval) != 0)
			{
				return;
			}

			if (RequiredSelectable != null && RequiredSelectable.IsSelected == false)
			{
				return;
			}

			if (onTwoFinger != null)
			{
				onTwoFinger.Invoke(finger);
			}

			if (onTwoFingerCount != null)
			{
				onTwoFingerCount.Invoke(finger.TapCount);
			}
		}
	}
}


#if UNITY_EDITOR
namespace Lean.Touch
{
	[CanEditMultipleObjects]
	[CustomEditor(typeof(LeanFingerTap))]
	public class LeanFingerTap_Inspector : LeanInspector<LeanFingerTap>
	{
		private bool showUnusedEvents;

		protected override void DrawInspector()
		{
			Draw("IgnoreStartedOverGui", "Ignore fingers with StartedOverGui?");
			Draw("IgnoreIsOverGui", "Ignore fingers with OverGui?");
			Draw("RequiredSelectable", "Do nothing if this LeanSelectable isn't selected?");
			Draw("RequiredTapCount", "How many times must this finger tap before OnTap gets called?\n\n0 = Every time (keep in mind OnTap will only be called once if you use this).");
			Draw("RequiredTapInterval", "How many times repeating must this finger tap before OnTap gets called?\n\n0 = Every time (e.g. a setting of 2 means OnTap will get called when you tap 2 times, 4 times, 6, 8, 10, etc).");

			EditorGUILayout.Separator();

			var usedA = Any(t => t.OnFinger.GetPersistentEventCount() > 0);
			var usedB = Any(t => t.OnCount.GetPersistentEventCount() > 0);
			var usedC = Any(t => t.OnWorld.GetPersistentEventCount() > 0);
			var usedD = Any(t => t.OnOneFinger.GetPersistentEventCount() > 0); // custome code
			var usedE = Any(t => t.OnOneFinger.GetPersistentEventCount() > 0); // custome code
			var usedF = Any(t => t.OnTwoFinger.GetPersistentEventCount() > 0); // custome code
			var usedG = Any(t => t.OnTwoFinger.GetPersistentEventCount() > 0); // custome code

			EditorGUI.BeginDisabledGroup(usedA && usedC);
				showUnusedEvents = EditorGUILayout.Foldout(showUnusedEvents, "Show Unused Events");
			EditorGUI.EndDisabledGroup();

			EditorGUILayout.Separator();

			if (usedA == true || showUnusedEvents == true)
			{
				Draw("onFinger");
			}

			if (usedB == true || showUnusedEvents == true)
			{
				Draw("onCount");
			}

			if (usedC == true || showUnusedEvents == true)
			{
				Draw("ScreenDepth");
				Draw("onWorld");
			}

			if (usedD == true || showUnusedEvents == true) // custome code
			{
				Draw("onOneFinger");
			}

			if (usedE == true || showUnusedEvents == true) // custome code
			{
				Draw("onOneFingerCount");
			}

			if (usedF == true || showUnusedEvents == true) // custome code
			{
				Draw("onTwoFinger");
			}

			if (usedG == true || showUnusedEvents == true) // custome code
			{
				Draw("onTwoFingerCount");
			}
		}
	}
}
#endif